#!/usr/bin/env bash

# Terminate already running bar instances
killall -q polybar

# Wait until the processes have been shut down
while pgrep -u $UID -x polybar >/dev/null; do sleep 1; done

# Launch polybar on both monitors
echo "---" | tee -a /tmp/polybar.log

# Check if external monitor (HDMI-2) is connected
if xrandr | grep "HDMI-2 connected" > /dev/null; then
    echo "External monitor detected - launching bars on both monitors" | tee -a /tmp/polybar.log
    # Launch on HDMI-2 (external monitor) with system tray
    MONITOR=HDMI-2 /usr/bin/polybar --config=~/.config/polybar/config.ini main 2>&1 | tee -a /tmp/polybar.log & disown

    # Launch on eDP-1 (laptop monitor) without system tray
    MONITOR=eDP-1 /usr/bin/polybar --config=~/.config/polybar/config.ini secondary 2>&1 | tee -a /tmp/polybar.log & disown
else
    echo "Only laptop monitor - launching bar with tray on eDP-1" | tee -a /tmp/polybar.log
    # Launch on eDP-1 (laptop monitor) with system tray
    MONITOR=eDP-1 /usr/bin/polybar --config=~/.config/polybar/config.ini main 2>&1 | tee -a /tmp/polybar.log & disown
fi

echo "Polybar launched..."
