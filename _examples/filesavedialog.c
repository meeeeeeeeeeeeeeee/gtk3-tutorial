#include <gtk/gtk.h>

int main(int argc, char *argv[]) {

    gtk_init(&argc, &argv);
    
    GtkWidget       *file_save_dialog = gtk_file_chooser_dialog_new("Save File", NULL, GTK_FILE_CHOOSER_ACTION_SAVE, "Cancel", GTK_RESPONSE_CANCEL, "Save", GTK_RESPONSE_OK, NULL);

    gtk_dialog_run(GTK_DIALOG(file_save_dialog));
    g_print("Selected file: %s", gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(file_save_dialog)));
    gtk_widget_destroy(file_save_dialog);

    return 0;

}
