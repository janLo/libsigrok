/*
 * This file is part of the libsigrok project.
 *
 * Copyright (C) 2014 Matthias Heidbrink <m-sigrok@heidbrink.biz>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBSIGROK_HARDWARE_CONRAD_DIGI_35_CPU_PROTOCOL_H
#define LIBSIGROK_HARDWARE_CONRAD_DIGI_35_CPU_PROTOCOL_H

#include <stdint.h>
#include <glib.h>
#include "libsigrok.h"
#include "libsigrok-internal.h"

/* Message logging helpers with subsystem-specific prefix string. */
#define LOG_PREFIX "conrad-digi-35-cpu"

/** Private, per-device-instance driver context. */
struct dev_context {
	/* Model-specific information */

	/* Acquisition settings */

	/* Operational state */

	/* Temporary state across callbacks */

};

SR_PRIV int conrad_digi_35_cpu_receive_data(int fd, int revents, void *cb_data);

#endif