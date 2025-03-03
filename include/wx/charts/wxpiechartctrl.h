#ifndef WX_CHARTS_WXPIECHARTCTRL_H
#define WX_CHARTS_WXPIECHARTCTRL_H

#include "wxchartctrl.h"
#include "wxpiechart.h"


class wxPieChartCtrl : public wxChartCtrl
{
public:
    wxPieChartCtrl(wxWindow *parent,
                   wxWindowID id,
                   wxSharedPtr<wxPieChartData> data,
                   const wxPoint &pos = wxDefaultPosition,
                   const wxSize &size = wxDefaultSize,
                   long style = 0);

    wxPieChartCtrl(wxWindow *parent,
                   wxWindowID id,
                   wxSharedPtr<wxPieChartData> data,
                   wxSharedPtr<wxPieChartOptions> options,
                   const wxPoint &pos = wxDefaultPosition,
                   const wxSize &size = wxDefaultSize,
                   long style = 0);

    wxChart &GetChart() override;

private:
    wxPieChart m_pieChart;
};

#endif  // WX_CHARTS_WXPIECHARTCTRL_H
