#!/bin/bash

function run {
	if ! pgrep $1; then
		$@ &
	fi
}

is_process_running() {
    pgrep "$1" > /dev/null
}

run_if_not_running() {
    if ! is_process_running "$1"; then
        "$@" &
    fi
}
# run "xrandr --output eDP-1 --auto --output HDMI2 --auto --left-of eDP-1"
# run "pamac-tray"
#run "variety"
#run "xfce4-power-manager"
#run "blueberry-tray"
# run "/usr/lib/xfce4/notifyd/xfce4-notifyd"
# run "batnotif.sh"
run "/usr/lib/polkit-gnome/polkit-gnome-authentication-agent-1"
picom -b --config ~/.config/picom/picom.conf &
run "numlockx on"
# run "volumeicon"
run "dwmblocks" &
run "xset -dpms"
run "xset s off "
# trayer \
#   --edge bottom \
#   --align right \
#   --SetDockType true \
#   --SetPartialStrut true \
#   --width 5 \
#   --transparent true \
#   --alpha 0 \
#   --tint 0x292d3e \
#   --height 14 &
# # run "slstatus" &
sxhkd -c ~/.config/sxhkd/sxhkdrc &
#run "nitrogen --restore"
#run "conky -c $HOME/.config/arco-dwm/system-overview"
#you can set wallpapers in themes as well
# feh --randomize --bg-fill ~/Pictures/wallpapers/* &
# feh --bg-scale ~/Pictures/wallpapers/fullmetal.jpg &
feh --bg-fill ~/Pictures/wallpapers/archlinux.png &
# feh --bg-scale ~/Pictures/backup-pictures/0062.jpg &
# feh --bg-fill /usr/share/backgrounds/archlinux-login-backgrounds/att-01.jpg &
# feh --randomize --bg-fill ~/Apps/Tokyo-Night-GTK-Theme/wallpapers/* &
# feh --randomize --bg-fill ~/Pictures/Wallpapers/* &
# feh --bg-fill ~/Pictures/Wallpapers/images/room/12.jpg &
#wallpaper for other Arch based systems
# feh --bg-fill /usr/share/archlinux-tweak-tool/data/wallpaper/wallpaper.png &
# run "/home/permaditya/Scripts/batterynotify.sh"

#run applications from startup

# xinput set-prop 10 "Device Enabled" 0
sleep 15
run "thunderbird"
run "trayer --edge bottom --distance 20  --align center --SetDockType true --SetPartialStrut true --width 10 --transparent true --alpha 0 --tint 0x292d3e --height 19"
run "nm-applet"
#run "spotify"
#run "ckb-next -b"
#run "discord"
#run "telegram-desktop"
