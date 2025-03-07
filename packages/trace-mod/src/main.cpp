#include <toolkit/tcp.hpp>

#include "hooks.hpp"
#include "reporter.hpp"

extern "C" void megaton_main() {
    botw::tcp::init();
    botw::tcp::start_server(5001);
    botw::ist::trace::init();
    botw::ist::trace::install_hooks();
}
