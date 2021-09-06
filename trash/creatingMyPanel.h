#ifndef CREATINGMYPANEL_H
#define CREATINGMYPANEL_H


class creatingMyPanel : public wxPanel
{
    public:
        creatingMyPanel(wxPanel *parent);
        virtual ~creatingMyPanel();
void OnMyButton(wxCommandEvent & event);
    protected:

    private:
};

#endif // CREATINGMYPANEL_H
