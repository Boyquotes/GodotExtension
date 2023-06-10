#include <iostream>
#include <memory>

class App
{
private:
public:
    App()
    {
    }
    ~App()
    {
    }

    using Ptr = std::shared_ptr<App>;
    static Ptr MakePtr() { return std::make_shared<App>(); }
};
int main(int argc, char **argv)
{
    App::Ptr app;
    try
    {
        app = App::MakePtr();
        return EXIT_SUCCESS;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }
}
