// Generated by commsdsl2tools_qt v6.3.0

#pragma once

#include <QtCore/QVariantList>
#include "cc_mqtt5/message/Pingreq.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt_plugin/cc_mqtt5/Message.h"
#include "cc_tools_qt_plugin/cc_mqtt5/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt5
{

namespace message
{

class Pingreq : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqtt5::message::Pingreq<cc_tools_qt_plugin::cc_mqtt5::Message, cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>,
        Pingreq
    >
{
public:
    Pingreq();
    Pingreq(const Pingreq&) = delete;
    Pingreq(Pingreq&&) = delete;
    virtual ~Pingreq();
    Pingreq& operator=(const Pingreq&);
    Pingreq& operator=(Pingreq&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_mqtt5

} // namespace cc_tools_qt_plugin