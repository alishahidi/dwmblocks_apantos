#!/usr/bin/env bash

BRIGHTNESS=$(xbacklight -get | cut -f1 -d'.')
echo "盛 ${BRIGHTNESS}%"
