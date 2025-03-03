/*
    Copyright (c) 2016-2024 Xavier Leclercq and the wxCharts contributors

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
    IN THE SOFTWARE.
*/

/// @file

// #ifndef _WX_CHARTS_WXPIECHART_H_
// #define _WX_CHARTS_WXPIECHART_H_
#ifndef _WXDLLIMPEXP_ISHIKO_CHARTS_
#define _WXDLLIMPEXP_ISHIKO_CHARTS_

#include "wxdoughnutandpiechartbase.h"
#include "wxpiechartoptions.h"
#include "wxpiechartdata.h"
#include "wxchart.h"
#include "wxchartselement.h" 

/// A pie chart.

/// \ingroup chartclasses
class WXDLLIMPEXP_ISHIKO_CHARTS wxPieChart : public wxDoughnutAndPieChartBase 
{
public:
    wxPieChart(wxPieChartData::ptr data, const wxSize &size);
    wxPieChart(wxPieChartData::ptr data, wxSharedPtr<wxPieChartOptions> &options,
        const wxSize &size);

    virtual const wxChartCommonOptions& GetCommonOptions() const;
    virtual void DoSetSize(const wxSize &size) override;
    virtual void DoFit() override;
    void DoDraw(wxGraphicsContext &gc, bool suppressTooltips) override;
    wxSharedPtr<wxVector<const wxChartsElement*>> GetActiveElements(const wxPoint &point) override ;

private:
    const wxDoughnutAndPieChartOptionsBase& GetOptions() const override;

private:
    wxSharedPtr<wxPieChartOptions> m_options;
};

#endif
