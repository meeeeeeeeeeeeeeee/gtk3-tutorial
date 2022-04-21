#include <gtk/gtk.h>

int main(int argc, char *argv[]) {    

    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    GtkListStore *liststore = gtk_list_store_new(1, G_TYPE_STRING);
    GtkTreeIter iter;
    GtkWidget *combobox = gtk_combo_box_new_with_model(GTK_TREE_MODEL(liststore));
    GtkCellRenderer *cellrenderertext = gtk_cell_renderer_text_new();

    gtk_list_store_append(liststore, &iter);
    gtk_list_store_set(liststore, &iter, 0, "Item 1", -1);
    gtk_list_store_append(liststore, &iter);
    gtk_list_store_set(liststore, &iter, 0, "Item 2", -1);
    gtk_list_store_append(liststore, &iter);
    gtk_list_store_set(liststore, &iter, 0, "Item 3", -1);
    gtk_list_store_append(liststore, &iter);
    gtk_list_store_set(liststore, &iter, 0, "Item 4", -1);
    gtk_list_store_append(liststore, &iter);
    gtk_list_store_set(liststore, &iter, 0, "Item 5", -1);

    gtk_combo_box_set_active(GTK_COMBO_BOX(combobox), 0);
    gtk_container_add(GTK_CONTAINER(window), combobox);

    gtk_cell_layout_pack_start(GTK_CELL_LAYOUT(combobox), cellrenderertext, TRUE);
    gtk_cell_layout_set_attributes(GTK_CELL_LAYOUT(combobox), cellrenderertext, "text", 0, NULL);
    
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    
    gtk_widget_show_all(window);
    
    gtk_main();
    
    return 0;

}
