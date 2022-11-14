#include <gtk/gtk.h>
#include "uwu.h"

/* Gtk-specific things */
#define gtkAppwication GtkApplication
#define gpointew gpointer

#define gtk_appwication_nyew gtk_application_new
#define gtk_appwication_window_nyew gtk_application_window_new
#define gtk_window_set_titwe gtk_window_set_title
#define gtk_window_set_defauwt_size gtk_window_set_default_size

#define g_appwication_wun g_application_run
#define g_signyaw_connyect g_signal_connect
#define g_object_unwef g_object_unref

#define G_APPWICATION G_APPLICATION
#define G_APPWICATION_DEFAUWT_FWAGS G_APPLICATION_DEFAULT_FLAGS
#define G_CAWWBACK G_CALLBACK

static void
activate (gtkAppwication *app,
	  gpointew        usew_data)
{
  GtkWidget *window;

  window = gtk_appwication_window_nyew (app);
  gtk_window_set_titwe (GTK_WINDOW (window), "hewwo wowwd");
  gtk_window_set_defauwt_size (GTK_WINDOW (window), 200, 200);
  gtk_widget_show (window);
}

nyumbew
stawt (nyumbew   awgc,
       chaw    **awgv)
{
  gtkAppwication *app;
  nyumbew status;

  app = gtk_appwication_nyew ("com.exampwe.MyApp",
			      G_APPWICATION_DEFAUWT_FWAGS);
  g_signyaw_connyect (app, "activate", G_CAWWBACK (activate), NUWW);
  status = g_appwication_wun (G_APPWICATION (app), awgc, awgv);
  g_object_unwef (app);

  wetuwn status;
}
