// Generated by commsdsl2tools_qt v6.3.4

#include "Unsubscribe.h"

#include "cc_mqtt5/field/Topic.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/PacketId.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/PropertiesList.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/String.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/Topic.h"
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
    using Field = ::cc_mqtt5::message::UnsubscribeFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::PacketId;
    auto props = cc_tools_qt_plugin::cc_mqtt5::field::createProps_packetId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_properties(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt5::message::UnsubscribeFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::Properties;
    auto props = cc_tools_qt_plugin::cc_mqtt5::field::createProps_propertiesList(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt5::message::UnsubscribeFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(cc_tools_qt_plugin::cc_mqtt5::field::createProps_topic(Field::ValueType::value_type::name(), serHidden))
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

Unsubscribe::Unsubscribe() = default;
Unsubscribe::~Unsubscribe() = default;
Unsubscribe& Unsubscribe::operator=(const Unsubscribe&) = default;
Unsubscribe& Unsubscribe::operator=(Unsubscribe&&) = default;

const QVariantList& Unsubscribe::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_mqtt5

} // namespace cc_tools_qt_plugin
