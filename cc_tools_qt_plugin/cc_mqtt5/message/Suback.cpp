// Generated by commsdsl2tools_qt v6.3.4

#include "Suback.h"

#include "cc_mqtt5/field/ReasonCode.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/PacketId.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/PropertiesList.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/ReasonCode.h"
#include "cc_tools_qt_plugin/cc_mqtt5/options/DefaultOptions.h"

namespace cc_tools_qt_plugin
{

namespace cc_mqtt5
{

namespace message
{

namespace
{

static QVariantMap createProps_packetId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt5::message::SubackFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::PacketId;
    auto props = cc_tools_qt_plugin::cc_mqtt5::field::createProps_packetId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_properties(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt5::message::SubackFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::Properties;
    auto props = cc_tools_qt_plugin::cc_mqtt5::field::createProps_propertiesList(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt5::message::SubackFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(cc_tools_qt_plugin::cc_mqtt5::field::createProps_reasonCode(Field::ValueType::value_type::name(), serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_packetId(false));
    props.append(createProps_properties(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

Suback::Suback() = default;
Suback::~Suback() = default;
Suback& Suback::operator=(const Suback&) = default;
Suback& Suback::operator=(Suback&&) = default;

const QVariantList& Suback::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_mqtt5

} // namespace cc_tools_qt_plugin
