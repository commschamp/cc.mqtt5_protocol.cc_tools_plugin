// Generated by commsdsl2tools_qt v6.3.4

#pragma once

#include <QtCore/QVariantList>
#include "cc_mqtt5/message/Puback.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt_plugin/cc_mqtt5/Message.h"
#include "cc_tools_qt_plugin/cc_mqtt5/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt5
{

namespace message
{

class Puback : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqtt5::message::Puback<cc_tools_qt_plugin::cc_mqtt5::Message, cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>,
        Puback
    >
{
public:
    Puback();
    Puback(const Puback&) = delete;
    Puback(Puback&&) = delete;
    virtual ~Puback();
    Puback& operator=(const Puback&);
    Puback& operator=(Puback&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_mqtt5

} // namespace cc_tools_qt_plugin
