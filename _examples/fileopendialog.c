#include <gtk/gtk.h>

int main(int argc, char *argv[])
{    
    gtk_init(&argc, &argv);
    
    GtkWidget       *file_open_dialog = gtk_file_chooser_dialog_new("Open File", NULL, GTK_FILE_CHOOSER_ACTION_OPEN, "Cancel", GTK_RESPONSE_CANCEL, "Open", GTK_RESPONSE_OK, NULL);

	gtk_window_set_icon(GTK_WINDOW(file_open_dialog), application_icon);

	gtk_dialog_run(GTK_DIALOG(file_open_dialog));
	g_print("Selected file: %s", gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(file_open_dialog)));
	gtk_widget_destroy(file_open_dialog);

    return 0;
}
