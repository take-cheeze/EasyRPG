/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * enum.vala
 * Copyright (C) EasyRPG Project 2011
 *
 * EasyRPG is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EasyRPG is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
public enum LayerType {
	LOWER = 0,
	UPPER = 1,
	EVENT = 2
}

public enum DrawingTool {
	SELECT = 0,
	ZOOM = 1,
	PEN = 2,
	ERASER_NORMAL = 3,
	ERASER_RECTANGLE = 4,
	ERASER_CIRCLE = 5,
	ERASER_FILL = 6,
	RECTANGLE = 7,
	CIRCLE = 8,
	FILL = 9
}