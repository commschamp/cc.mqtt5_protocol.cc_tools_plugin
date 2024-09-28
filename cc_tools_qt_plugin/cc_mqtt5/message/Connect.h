// Generated by commsdsl2tools_qt v6.3.4

#pragma once

#include <QtCore/QVariantList>
#include "cc_mqtt5/message/Connect.h"
#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt_plugin/cc_mqtt5/Message.h"
#include "cc_tools_qt_plugin/cc_mqtt5/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt5
{

namespace message
{

class Connect : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_mqtt5::message::Connect<cc_tools_qt_plugin::cc_mqtt5::Message, cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>,
        Connect
    >
{
public:
    Connect();
    Connect(const Connect&) = delete;
    Connect(Connect&&) = delete;
    virtual ~Connect();
    Connect& operator=(const Connect&);
    Connect& operator=(Connect&&);

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
};

} // namespace message

} // namespace cc_mqtt5

} // namespace cc_tools_qt_plugin
