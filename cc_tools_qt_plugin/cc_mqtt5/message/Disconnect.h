// Generated by commsdsl2tools_qt v6.3.0

#pragma once

#include <QtCore/QVariantList>
#include "cc_mqtt5/message/Disconnect.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt_plugin/cc_mqtt5/Message.h"
#include "cc_tools_qt_plugin/cc_mqtt5/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt5
{

namespace message
{

class Disconnect : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqtt5::message::Disconnect<cc_tools_qt_plugin::cc_mqtt5::Message, cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>,
        Disconnect
    >
{
public:
    Disconnect();
    Disconnect(const Disconnect&) = delete;
    Disconnect(Disconnect&&) = delete;
    virtual ~Disconnect();
    Disconnect& operator=(const Disconnect&);
    Disconnect& operator=(Disconnect&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_mqtt5

} // namespace cc_tools_qt_plugin