#include "wx/charts/wxpiechartctrl.h"
#include "wx/charts/wxpiechart.h"

wxPieChartCtrl::wxPieChartCtrl(wxWindow *parent,
                               wxWindowID id,
                               wxSharedPtr<wxPieChartData> data,
                               const wxPoint &pos,
                               const wxSize &size,
                               long style)
    : wxChartCtrl(parent, id, pos, size, style),
      m_pieChart(data, size)  
{
    SetMinSize(wxSize(100, 100));
}

wxPieChartCtrl::wxPieChartCtrl(wxWindow *parent,
                               wxWindowID id,
                               wxSharedPtr<wxPieChartData> data,
                               wxSharedPtr<wxPieChartOptions> options,
                               const wxPoint &pos,
                               const wxSize &size,
                               long style)
    : wxChartCtrl(parent, id, pos, size, style),
      m_pieChart(data, size)
{
    SetMinSize(wxSize(100, 100));
}

wxChart &wxPieChartCtrl::GetChart() 
{
    return static_cast<wxChart&>(m_pieChart);
}
