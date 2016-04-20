#include "tradeform.h"
#include "tablewidget_helper.h"
#include "ui_tradeform.h"

TradeForm::TradeForm(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::TradeForm)
{
    ui->setupUi(this);

    //设置列=
    instruments_col_ << "symbol"
                     << "exchange"
                     << "tradeId"
                     << "orderId"

                     << "direction"
                     << "offset"
                     << "price"
                     << "volume"
                     << "tradeTime";
    this->ui->tableWidget->setColumnCount(instruments_col_.length());
    for (int i = 0; i < instruments_col_.length(); i++) {
        ui->tableWidget->setHorizontalHeaderItem(i, new QTableWidgetItem(instruments_col_.at(i)));
    }

    // 调整参数=
    bfAdjustTableWidget(ui->tableWidget);
}

TradeForm::~TradeForm()
{
    delete ui;
}

void TradeForm::init()
{
}

void TradeForm::shutdown()
{
}
