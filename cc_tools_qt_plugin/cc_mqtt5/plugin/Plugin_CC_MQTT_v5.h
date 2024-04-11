// Generated by commsdsl2tools_qt v6.3.2

#pragma once

#include <QtCore/QObject>
#include <QtCore/QtPlugin>
#include "cc_tools_qt/Plugin.h"
#include "cc_tools_qt/Protocol.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt5
{

namespace plugin
{

class Plugin_CC_MQTT_v5 : public cc_tools_qt::Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "cc.Mqtt5ProtocolPlugin" FILE "Plugin_CC_MQTT_v5.json")
    Q_INTERFACES(cc_tools_qt::Plugin)

public:
    Plugin_CC_MQTT_v5();
    virtual ~Plugin_CC_MQTT_v5();

private:
    cc_tools_qt::ProtocolPtr m_protocol;
};

} // namespace plugin

} // namespace cc_mqtt5

} // namespace cc_tools_qt_plugin
