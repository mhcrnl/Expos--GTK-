#include <stdlib.h>
#include <stdio.h>
#include <gtk/gtk.h>
#include <math.h>
#include <string.h>
#define max 30

typedef struct{
	GtkWidget *Entrer;
	int res;
	int type;
}MyData;

void _setText(GtkWidget *pBtn, gpointer entry){
	gchar stext[max];
	if(strcmp(gtk_entry_get_text(GTK_ENTRY(entry)),"0") != 0){
		g_sprintf(stext,"%s",gtk_entry_get_text(GTK_ENTRY(entry)));
	}
	else if(strcmp(gtk_button_get_label(GTK_BUTTON(pBtn)),",") == 0){
		g_sprintf(stext,"%s","0");
	}
	else{
		g_sprintf(stext,"%s","");
	}
	strcat(stext,gtk_button_get_label(GTK_BUTTON(pBtn)));
	gtk_entry_set_text(GTK_ENTRY(entry), stext);
}

void clear(GtkWidget *pBtn, MyData* data){
	gtk_entry_set_text(GTK_ENTRY(data->Entrer), "0");
	data->res = 0;
	data->type = 0;
}

void add(GtkWidget *pBtn, MyData* data){
	data->res = atoi(gtk_entry_get_text(GTK_ENTRY(data->Entrer)));
	data->type = 0;
	gtk_entry_set_text(GTK_ENTRY(data->Entrer), "0");
}

void sub(GtkWidget *pBtn, MyData* data){
	data->res = atoi(gtk_entry_get_text(GTK_ENTRY(data->Entrer)));
	data->type = 1;
	gtk_entry_set_text(GTK_ENTRY(data->Entrer), "0");
}

void mul(GtkWidget *pBtn, MyData* data){
	data->res = atoi(gtk_entry_get_text(GTK_ENTRY(data->Entrer)));
	data->type = 2;
	gtk_entry_set_text(GTK_ENTRY(data->Entrer), "0");
}

void divide(GtkWidget *pBtn, MyData* data){
	data->res = atoi(gtk_entry_get_text(GTK_ENTRY(data->Entrer)));
	data->type = 3;
	gtk_entry_set_text(GTK_ENTRY(data->Entrer), "0");
}

void result(GtkWidget *pBtn, MyData* data){
	//printf("%d\n",data->type);
	int i;
	if(data->type == 0){
		printf("niok");
		//addition
		i = atoi(gtk_entry_get_text(GTK_ENTRY(data->Entrer)));
		data->res = data->res + i;
	}
	if(data->type == 1){
		printf("niok");
		//soustraction
		i = atoi(gtk_entry_get_text(GTK_ENTRY(data->Entrer)));
		data->res = data->res - i;
	}
	if(data->type == 2){
		printf("niok");
		//multiplication
		i = atoi(gtk_entry_get_text(GTK_ENTRY(data->Entrer)));
		data->res = data->res * i;
	}
	if(data->type == 3){
		printf("niok");
		//division
		if(atoi(gtk_entry_get_text(GTK_ENTRY(data->Entrer))) != 0){
			i = atoi(gtk_entry_get_text(GTK_ENTRY(data->Entrer)));
			data->res = data->res / i;
		}
	}
	gchar stext[max];
	g_sprintf(stext,"%d",data->res);
	gtk_entry_set_text(GTK_ENTRY(data->Entrer), stext);//*/
}

int main(int argc, char** argv){
	gtk_init(&argc, &argv);
	
	GtkWidget *window;
	GtkWidget *VBox;
	GtkWidget *table;
	GtkWidget *MenuBar;
	GtkWidget *MenuItem;
	GtkWidget *MenuIgem;
	GtkWidget *MenuIhem;
	GtkWidget *Entrer;
	GtkWidget *Bouton[18];
	GtkWidget *label;
	
	//*Création de fenêtre principal
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_default_size(GTK_WINDOW(window), 255, 200);
	gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
	gtk_window_set_title(GTK_WINDOW(window)," Calculatrice");
	gtk_window_set_modal(GTK_WINDOW(window), TRUE);
	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL );
	
	VBox = gtk_box_new(TRUE, 3);
	gtk_container_add(GTK_CONTAINER(window), VBox);
	
	table = gtk_table_new(4, 4, 1);
	gtk_container_add(GTK_CONTAINER(VBox), table);
	gtk_container_set_border_width(GTK_CONTAINER(table),5);

	gchar buffer[G_ASCII_DTOSTR_BUF_SIZE];
	int i=0,x=5,y=6;
	for (i = 0; i < 9; i++)
	{
		Bouton[i+1] = gtk_button_new_with_label(g_ascii_dtostr (buffer,
					G_ASCII_DTOSTR_BUF_SIZE,
					i+1));
		if((i%3)==0){
			x--;y--;
		}
		gtk_table_attach(GTK_TABLE(table), Bouton[i+1], i%3, i%3+1, x, y,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);
		
	}
	Bouton[0] = gtk_button_new_with_label("0");
	gtk_table_attach(GTK_TABLE(table), Bouton[0],0, 1, 5, 6,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);
	Bouton[10] = gtk_button_new_with_label(",");
	gtk_table_attach(GTK_TABLE(table), Bouton[10],1, 2, 5, 6,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);
	Bouton[11] = gtk_button_new_with_label("=");
	gtk_table_attach(GTK_TABLE(table), Bouton[11],2, 3, 5, 6,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);
	Bouton[12] = gtk_button_new_with_label("x");
	gtk_table_attach(GTK_TABLE(table), Bouton[12],3, 4, 5, 6,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);
	Bouton[13] = gtk_button_new_with_label("/");
	gtk_table_attach(GTK_TABLE(table), Bouton[13],3, 4, 4, 5,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);
	Bouton[14] = gtk_button_new_with_label("+");
	gtk_table_attach(GTK_TABLE(table), Bouton[14],3, 4, 3, 4,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);
	Bouton[15] = gtk_button_new_with_label("-");
	gtk_table_attach(GTK_TABLE(table), Bouton[15],3, 4, 2, 3,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);
	Bouton[16] = gtk_button_new_with_label("clear");
	gtk_table_attach(GTK_TABLE(table), Bouton[16],0, 4, 6, 7,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);
	
	MyData data;
	data.Entrer = gtk_entry_new();
	gtk_entry_set_text(GTK_ENTRY(data.Entrer), "0");
	gtk_widget_set_can_focus(GTK_WIDGET(data.Entrer), FALSE);
	gtk_table_attach(GTK_TABLE(table), data.Entrer, 0, 4, 1, 2, GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);
	
	
	for(i=0;i<11;i++){
		g_signal_connect(G_OBJECT(Bouton[i]),  "clicked", G_CALLBACK(_setText),(GtkWidget*)data.Entrer);
	}
	g_signal_connect(G_OBJECT(Bouton[11]),  "clicked", G_CALLBACK(result),&data);
	g_signal_connect(G_OBJECT(Bouton[12]),  "clicked", G_CALLBACK(mul),&data);
	g_signal_connect(G_OBJECT(Bouton[13]),  "clicked", G_CALLBACK(divide),&data);
	g_signal_connect(G_OBJECT(Bouton[14]),  "clicked", G_CALLBACK(add),&data);
	g_signal_connect(G_OBJECT(Bouton[15]),  "clicked", G_CALLBACK(sub),&data);
	g_signal_connect(G_OBJECT(Bouton[16]),  "clicked", G_CALLBACK(clear),&data);
	
	gtk_widget_show_all(window);

	gtk_main();
	return 0;
}
