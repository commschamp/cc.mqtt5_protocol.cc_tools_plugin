// Generated by commsdsl2tools_qt v6.3.3

#pragma once

#include <memory>

#include "cc_tools_qt/Protocol.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt5
{

namespace plugin
{

class Protocol_CC_MQTT_v5Impl;
class Protocol_CC_MQTT_v5 : public cc_tools_qt::Protocol
{
public:
    Protocol_CC_MQTT_v5();
    virtual ~Protocol_CC_MQTT_v5();

protected:
    virtual const QString& nameImpl() const override;
    virtual MessagesList readImpl(const cc_tools_qt::DataInfo& dataInfo, bool final) override;
    virtual cc_tools_qt::DataInfoPtr writeImpl(cc_tools_qt::Message& msg) override;
    virtual MessagesList createAllMessagesImpl() override;
    virtual cc_tools_qt::MessagePtr createMessageImpl(const QString& idAsString, unsigned idx) override;
    virtual UpdateStatus updateMessageImpl(cc_tools_qt::Message& msg) override;
    virtual cc_tools_qt::MessagePtr cloneMessageImpl(const cc_tools_qt::Message& msg) override;
    virtual cc_tools_qt::MessagePtr createInvalidMessageImpl() override;
    virtual cc_tools_qt::MessagePtr createRawDataMessageImpl() override;
    virtual cc_tools_qt::MessagePtr createExtraInfoMessageImpl() override;

private:
    std::unique_ptr<Protocol_CC_MQTT_v5Impl> m_pImpl;
};

} // namespace plugin

} // namespace cc_mqtt5

} // namespace cc_tools_qt_plugin
