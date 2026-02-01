#!/bin/bash
# Calendar popup script for polybar

export DISPLAY=:1

# Toggle: kill existing yad calendar if running
if pgrep -f "yad --calendar" > /dev/null; then
    pkill -f "yad --calendar"
    exit 0
fi

# Position calendar in bottom-right, above the bar
POS_X=1650
POS_Y=850

# Launch yad calendar
yad --calendar \
    --undecorated \
    --fixed \
    --no-buttons \
    --posx=$POS_X \
    --posy=$POS_Y \
    --title="Calendar" \
    --borders=10 &
