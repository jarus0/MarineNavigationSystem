#ifndef FIRSTSTARTLOGOPANEL_H
#define FIRSTSTARTLOGOPANEL_H



class firstStartLogoPanel : public wxPanel
{
public:
    firstStartLogoPanel(wxPanel *panel);
    virtual ~firstStartLogoPanel();
    void OnMyButton(wxCommandEvent & event);



protected:

private:
    DECLARE_EVENT_TABLE()

};

#endif // FIRSTSTARTLOGOPANEL_H
