#include "config_manager.h"
#include <gio/gio.h>


int main() {
    OrgZbusMyGreeter1 *proxy;
    GError *error;

    error = NULL;
    proxy = org_zbus_my_greeter1_proxy_new_for_bus_sync(G_BUS_TYPE_SESSION, 
                                                        G_DBUS_PROXY_FLAGS_NONE,
                                                        "org.zbus.MyGreeter", 
                                                        "/org/zbus/MyGreeter",
                                                        NULL,
                                                        &error);
    gchar *greeting = "";
    org_zbus_my_greeter1_call_say_hello_sync(proxy, "Soumya", &greeting, NULL, &error);
    if(error) {
        g_printerr("%s", error->message);
        error=NULL;
    } else {
        g_print("Greeting %s", greeting);
    }
}
