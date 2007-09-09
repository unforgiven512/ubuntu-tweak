#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include "ubuntu-tweak.h"
#include "session_page.h"

GtkWidget *create_startup_notebook()
{
/*定义笔记本*/
	GtkWidget *notebook;
	GtkWidget *session_main_vbox;
	GtkWidget *session_page_label;

	notebook=gtk_notebook_new();
	gtk_notebook_set_tab_pos(GTK_NOTEBOOK(notebook),GTK_POS_TOP);

	session_main_vbox=create_session_page();

/*Session label*/
	session_page_label=gtk_label_new(_("Session"));
	gtk_widget_show(session_page_label);

	GtkWidget *frame2;
	GtkWidget *frame3;
	GtkWidget *frame_label3;
	GtkWidget *checkbutton1;

	checkbutton1=gtk_check_button_new_with_mnemonic("checkbutton1");
	gtk_widget_show(checkbutton1);

	frame2=gtk_frame_new(_("Not complete yet"));
	GtkWidget *service_page_label;
	gtk_widget_show(frame2);
	service_page_label=gtk_label_new(_("Services"));
	gtk_widget_show(service_page_label);

	frame3=gtk_frame_new(_("Not complete yet"));
	gtk_widget_show(frame3);

	gtk_notebook_append_page(GTK_NOTEBOOK(notebook),session_main_vbox,session_page_label);
	gtk_notebook_append_page(GTK_NOTEBOOK(notebook),frame2,service_page_label);

	return notebook;
}
