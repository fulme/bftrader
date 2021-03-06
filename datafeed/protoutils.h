#ifndef PROTOUTILS_H
#define PROTOUTILS_H

#include "bfdatafeed.pb.h"
#include "bfgateway.pb.h"
#include <QString>

using namespace bftrader;

namespace ProtoUtils {

QString formatDirection(BfDirection direction);
QString formatOffset(BfOffset offset);
QString formatStatus(BfStatus status);
QString formatProduct(BfProduct product);
QString formatPeriod(BfBarPeriod period);
}

#endif // PROTOUTILS_H
