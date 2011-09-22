/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * editor.vala
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

public class Editor {
	/*
	 * Properties
	 */
	MainController main_controller;

	/*
	 * Constructor
	 */
	public Editor () {
		this.main_controller = new MainController ();
	}

	/*
	 * Run
	 */
	public void run () {
		this.main_controller.run ();
	}

	/*
	 * Main
	 */
	static int main (string[] args) {
		Gtk.init (ref args);

		var app = new Editor ();
		app.run ();

		Gtk.main ();

		return 0;
	}
}