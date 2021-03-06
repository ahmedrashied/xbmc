/*
 *  Copyright (C) 2014-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

// Duration to wait for input from the user
#define COUNTDOWN_DURATION_SEC  6

// Warn the user that time is running out after this duration
#define WAIT_TO_WARN_SEC        2

// GUI Control IDs
#define CONTROL_CONTROLLER_LIST             3
#define CONTROL_FEATURE_LIST                5
#define CONTROL_FEATURE_BUTTON_TEMPLATE     7
#define CONTROL_FEATURE_GROUP_TITLE         8
#define CONTROL_FEATURE_SEPARATOR           9
#define CONTROL_CONTROLLER_BUTTON_TEMPLATE  10
#define CONTROL_HELP_BUTTON                 17
#define CONTROL_CLOSE_BUTTON                18
#define CONTROL_RESET_BUTTON                19
#define CONTROL_GET_MORE                    20
#define CONTROL_FIX_SKIPPING                21
#define CONTROL_GAME_CONTROLLER             31

#define MAX_CONTROLLER_COUNT  100 // large enough
#define MAX_FEATURE_COUNT     200 // large enough

#define CONTROL_CONTROLLER_BUTTONS_START  100
#define CONTROL_CONTROLLER_BUTTONS_END    (CONTROL_CONTROLLER_BUTTONS_START + MAX_CONTROLLER_COUNT)
#define CONTROL_FEATURE_BUTTONS_START     CONTROL_CONTROLLER_BUTTONS_END
#define CONTROL_FEATURE_BUTTONS_END       (CONTROL_FEATURE_BUTTONS_START + MAX_FEATURE_COUNT)
#define CONTROL_FEATURE_GROUPS_START      CONTROL_FEATURE_BUTTONS_END
#define CONTROL_FEATURE_GROUPS_END        (CONTROL_FEATURE_GROUPS_START + MAX_FEATURE_COUNT)
#define CONTROL_FEATURE_SEPARATORS_START  CONTROL_FEATURE_GROUPS_END
#define CONTROL_FEATURE_SEPARATORS_END    (CONTROL_FEATURE_SEPARATORS_START + MAX_FEATURE_COUNT)
