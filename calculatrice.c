#include <stdlib.h>
#include <stdio.h>
#include <gtk/gtk.h>
#include <math.h>
#include <string.h>
#define max 30

    GtkWidget *window;
    //GtkPixmap *icone;
    GtkWidget *VBox;
    GtkWidget *table;
    GtkWidget *MenuBar;
    GtkWidget *MenuItem;
    GtkWidget *MenuIgem;
    GtkWidget *MenuIhem;
    GtkWidget *Entrer;
    GtkWidget *Bouton[18];
    GtkWidget *label;


int n1,n2,n3,n4,n5,r;
gchar stext[max];

void numero_0(GtkWidget *pBtn, gpointer entry)
{
    g_sprintf(stext,"%s",gtk_entry_get_text(GTK_ENTRY(entry)));
    strcat(stext,gtk_button_get_label(GTK_BUTTON(pBtn)));
    gtk_entry_set_text(GTK_ENTRY(entry), stext);



}
void numero_1(GtkWidget *pBtn, gpointer entry)
{

    g_sprintf(stext,"%s",gtk_entry_get_text(GTK_ENTRY(entry)));
    strcat(stext,gtk_button_get_label(GTK_BUTTON(pBtn)));
    gtk_entry_set_text(GTK_ENTRY(entry), stext);




}
void numero_2(GtkWidget *pBtn, gpointer entry)
{
    g_sprintf(stext,"%s",gtk_entry_get_text(GTK_ENTRY(entry)));
    strcat(stext,gtk_button_get_label(GTK_BUTTON(pBtn)));
    gtk_entry_set_text(GTK_ENTRY(entry), stext);



}

void numero_3(GtkWidget *pBtn, gpointer entry)
{
    g_sprintf(stext,"%s",gtk_entry_get_text(GTK_ENTRY(entry)));
    strcat(stext,gtk_button_get_label(GTK_BUTTON(pBtn)));
    gtk_entry_set_text(GTK_ENTRY(entry), stext);



}

void numero_4(GtkWidget *pBtn, gpointer entry)
{
    g_sprintf(stext,"%s",gtk_entry_get_text(GTK_ENTRY(entry)));
    strcat(stext,gtk_button_get_label(GTK_BUTTON(pBtn)));
    gtk_entry_set_text(GTK_ENTRY(entry), stext);



}
void numero_5(GtkWidget *pBtn, gpointer entry)
{
    g_sprintf(stext,"%s",gtk_entry_get_text(GTK_ENTRY(entry)));
    strcat(stext,gtk_button_get_label(GTK_BUTTON(pBtn)));
    gtk_entry_set_text(GTK_ENTRY(entry), stext);



}

void numero_6(GtkWidget *pBtn, gpointer entry)
{
    g_sprintf(stext,"%s",gtk_entry_get_text(GTK_ENTRY(entry)));
    strcat(stext,gtk_button_get_label(GTK_BUTTON(pBtn)));
    gtk_entry_set_text(GTK_ENTRY(entry), stext);



}

void numero_7(GtkWidget *pBtn, gpointer entry)
{
    g_sprintf(stext,"%s",gtk_entry_get_text(GTK_ENTRY(entry)));
    strcat(stext,gtk_button_get_label(GTK_BUTTON(pBtn)));
    gtk_entry_set_text(GTK_ENTRY(entry), stext);



}

void numero_8(GtkWidget *pBtn, gpointer entry)
{
    g_sprintf(stext,"%s",gtk_entry_get_text(GTK_ENTRY(entry)));
    strcat(stext,gtk_button_get_label(GTK_BUTTON(pBtn)));
    gtk_entry_set_text(GTK_ENTRY(entry), stext);



}

void numero_9(GtkWidget *pBtn, gpointer entry)
{
    g_sprintf(stext,"%s",gtk_entry_get_text(GTK_ENTRY(entry)));
    strcat(stext,gtk_button_get_label(GTK_BUTTON(pBtn)));
    gtk_entry_set_text(GTK_ENTRY(entry), stext);



}
void virgule(GtkWidget *pBtn, gpointer entry)
{
    g_sprintf(stext,"%s",gtk_entry_get_text(GTK_ENTRY(entry)));
    strcat(stext,gtk_button_get_label(GTK_BUTTON(pBtn)));
    gtk_entry_set_text(GTK_ENTRY(entry), stext);



}

int main(int argc, char **argv)

{



    gtk_init(&argc, &argv);

    //*Création de fenêtre principal
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(window), 255, 227);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_title(GTK_WINDOW(window)," Calculatrice");
    gtk_window_set_modal(GTK_WINDOW(window), TRUE);
    g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL );

    //icone = gdk_pixbuf_new_from_file("clt.ico", 0);
    //gtk_window_set_icon(GTK_WINDOW(window), icone);

    //*Création de la Box*//
    VBox = gtk_vbox_new(0, 0);
    gtk_container_add(GTK_CONTAINER(window), VBox);






    //*________________Création De la bare_________________ *//
    MenuBar = gtk_menu_bar_new();

    MenuItem = gtk_menu_item_new_with_label("Edition");
    MenuIgem = gtk_menu_item_new_with_label("Affichage");
    MenuIhem = gtk_menu_item_new_with_label(" ?");

    gtk_menu_shell_append(GTK_MENU_SHELL(MenuBar), MenuItem );
    gtk_menu_shell_append(GTK_MENU_SHELL(MenuBar), MenuIgem );
    gtk_menu_shell_append(GTK_MENU_SHELL(MenuBar), MenuIhem );




    gtk_box_pack_start(GTK_BOX(VBox), MenuBar, FALSE, FALSE, 0);

    //*________________Création d'entrer__________________*//

    Entrer = gtk_entry_new_with_max_length(max);
    gtk_entry_set_editable(GTK_ENTRY(Entrer), NULL);
    gtk_entry_set_alignment(GTK_ENTRY(Entrer), TRUE);
    gtk_entry_set_has_frame(GTK_ENTRY(Entrer),NULL);




    //*________________Création de la table_______________*//

    table = gtk_table_new(8, 3, 1);
    gtk_container_add(GTK_CONTAINER(VBox), table);
   (gtk_container_set_border_width(GTK_CONTAINER(table),5));
    gtk_table_attach_defaults(GTK_TABLE(table), Entrer,0, 4, 0, 1);



                          //*________________Création des boutons_______________*//


    Bouton[1] = gtk_button_new_with_label("7");
    gtk_table_attach(GTK_TABLE(table), Bouton[1],0, 1, 2, 3,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);

    Bouton[2] = gtk_button_new_with_label("8");
    gtk_table_attach(GTK_TABLE(table), Bouton[2],1, 2, 2, 3,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);

    Bouton[3] = gtk_button_new_with_label("9");
    gtk_table_attach(GTK_TABLE(table), Bouton[3],2, 3, 2, 3,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);

    Bouton[4] = gtk_button_new_with_label("/");
    gtk_table_attach(GTK_TABLE(table), Bouton[4],3, 4, 2, 3,GTK_EXPAND | GTK_FILL, GTK_EXPAND,10, 0);

    Bouton[5] = gtk_button_new_with_label("4");
    gtk_table_attach(GTK_TABLE(table), Bouton[5],0, 1, 3, 4,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);

    Bouton[6] = gtk_button_new_with_label("5");
    gtk_table_attach(GTK_TABLE(table), Bouton[6],1, 2, 3, 4,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);

    Bouton[7] = gtk_button_new_with_label("6");
    gtk_table_attach(GTK_TABLE(table), Bouton[7],2, 3, 3, 4,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);

    Bouton[8] = gtk_button_new_with_label("*");
    gtk_table_attach(GTK_TABLE(table), Bouton[8],3, 4, 3, 4,GTK_EXPAND | GTK_FILL, GTK_EXPAND,10, 0);

    Bouton[9] = gtk_button_new_with_label("1");
    gtk_table_attach(GTK_TABLE(table), Bouton[9],0, 1, 4, 5,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);

     Bouton[10] = gtk_button_new_with_label("2");
    gtk_table_attach(GTK_TABLE(table), Bouton[10],1, 2, 4, 5,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);

     Bouton[11] = gtk_button_new_with_label("3");
    gtk_table_attach(GTK_TABLE(table), Bouton[11],2, 3, 4, 5,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);

     Bouton[12] = gtk_button_new_with_label("-");
    gtk_table_attach(GTK_TABLE(table), Bouton[12],3, 4, 4, 5,GTK_EXPAND | GTK_FILL, GTK_EXPAND,10, 0);

     Bouton[13] = gtk_button_new_with_label("0");
    gtk_table_attach(GTK_TABLE(table), Bouton[13],0, 1, 5, 6,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);

    Bouton[14] = gtk_button_new_with_label("+/-");
    gtk_table_attach(GTK_TABLE(table), Bouton[14],1, 2, 5, 6,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);

    Bouton[15] = gtk_button_new_with_label(",");
    gtk_table_attach(GTK_TABLE(table), Bouton[15],2, 3, 5, 6,GTK_EXPAND | GTK_FILL, GTK_EXPAND,0, 0);

    Bouton[16] = gtk_button_new_with_label("+");
    gtk_table_attach(GTK_TABLE(table), Bouton[16],3, 4, 5, 6,GTK_EXPAND | GTK_FILL, GTK_EXPAND,10, 0);

    Bouton[17] = gtk_button_new_with_label("=");
    gtk_table_attach(GTK_TABLE(table), Bouton[17],0, 4, 7, 8,GTK_EXPAND | GTK_FILL, GTK_EXPAND,20, 0);



                             //*__________________Création de label _______*//

    label = gtk_label_new("***mehdi@21***");
    gtk_table_attach_defaults(GTK_TABLE(table), label,0, 3 ,1,2);







                             //*___________connecter les operateurs__________*//


void plus(GtkWidget *Widget, gpointer *Data)
{


    n1=atoi(gtk_entry_get_text(GTK_ENTRY(Entrer)));


    gtk_entry_set_text(GTK_ENTRY(Entrer),"");

}

void moin(GtkWidget *pBtn, gpointer entry)
{

    n3=atoi(gtk_entry_get_text(GTK_ENTRY(Entrer)));

     gtk_entry_set_text(GTK_ENTRY(Entrer),"");
}


void div(GtkWidget *pBtn, gpointer entry)
{
     n4=atoi(gtk_entry_get_text(GTK_ENTRY(Entrer)));
     gtk_entry_set_text(GTK_ENTRY(Entrer),"");
}


void mul(GtkWidget *pBtn, gpointer entry)
{

     n5=atoi(gtk_entry_get_text(GTK_ENTRY(Entrer)));
     gtk_entry_set_text(GTK_ENTRY(Entrer),"");

}

                        //*___________________Signal DES NUMEROS____________________*//
    g_signal_connect(G_OBJECT(Bouton[13]),  "clicked", G_CALLBACK(numero_0),(GtkWidget*)Entrer);
    g_signal_connect(G_OBJECT(Bouton[ 9]),  "clicked", G_CALLBACK(numero_1),(GtkWidget*)Entrer);
    g_signal_connect(G_OBJECT(Bouton[10]),  "clicked", G_CALLBACK(numero_2),(GtkWidget*)Entrer);
    g_signal_connect(G_OBJECT(Bouton[11]),  "clicked", G_CALLBACK(numero_3),(GtkWidget*)Entrer);
    g_signal_connect(G_OBJECT(Bouton[ 5]),  "clicked", G_CALLBACK(numero_4),(GtkWidget*)Entrer);
    g_signal_connect(G_OBJECT(Bouton[ 6]),  "clicked", G_CALLBACK(numero_5),(GtkWidget*)Entrer);
    g_signal_connect(G_OBJECT(Bouton[ 7]),  "clicked", G_CALLBACK(numero_6),(GtkWidget*)Entrer);
    g_signal_connect(G_OBJECT(Bouton[ 1]),  "clicked", G_CALLBACK(numero_7),(GtkWidget*)Entrer);
    g_signal_connect(G_OBJECT(Bouton[ 2]),  "clicked", G_CALLBACK(numero_8),(GtkWidget*)Entrer);

    g_signal_connect(G_OBJECT(Bouton[ 15]),  "clicked", G_CALLBACK(virgule),(GtkWidget*)Entrer);


                      //*____________________Signal Des Operateurs__________________*//
    g_signal_connect(G_OBJECT(Bouton[16]), "clicked", G_CALLBACK(plus),(GtkWidget*)Entrer);
    g_signal_connect(G_OBJECT(Bouton[12]), "clicked", G_CALLBACK(moin),(GtkWidget*)Entrer);
    g_signal_connect(G_OBJECT(Bouton[8]),  "clicked", G_CALLBACK(mul) ,(GtkWidget*)Entrer);
    g_signal_connect(G_OBJECT(Bouton[ 4]), "clicked", G_CALLBACK(div) ,(GtkWidget*)Entrer);



//*_____________________________________________________________________________________________________________________________*//




  void resultat(void)

{

n2=atoi(gtk_entry_get_text(GTK_ENTRY(Entrer)));
    if(n1)
    {
    r=n1+n2;
    sprintf (stext,"%d",r);
    gtk_entry_set_text(GTK_ENTRY(Entrer), stext);
    }
    if(n3)
    {
    r=n3-n2;
    sprintf (stext,"%d",r);
    gtk_entry_set_text(GTK_ENTRY(Entrer), stext);
    }
    if(n4)
    {
    
    r=n4/n2;
    sprintf (stext,"%d",r);
    gtk_entry_set_text(GTK_ENTRY(Entrer), stext);
    }
    if(n5)
    {
    r=n5*n2;
    sprintf (stext,"%d",r);
    gtk_entry_set_text(GTK_ENTRY(Entrer), stext);
    }


    if(r)
    {
        n3=0;
        n1=0;
        n4=0;
        n5=0;

    }

}
g_signal_connect(G_OBJECT(Bouton[17]), "clicked", G_CALLBACK(resultat),(GtkWidget*)Entrer);







    gtk_widget_show_all(window);

    gtk_main();

    return EXIT_SUCCESS;
}
