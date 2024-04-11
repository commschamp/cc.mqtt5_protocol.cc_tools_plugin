// Generated by commsdsl2tools_qt v6.3.2

#include "Subscribe.h"

#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/PacketId.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/PropertiesList.h"
#include "cc_tools_qt_plugin/cc_mqtt5/field/Qos.h"
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
    using Field = ::cc_mqtt5::message::SubscribeFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::PacketId;
    auto props = cc_tools_qt_plugin::cc_mqtt5::field::createProps_packetId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_properties(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt5::message::SubscribeFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::Properties;
    auto props = cc_tools_qt_plugin::cc_mqtt5::field::createProps_propertiesList(Field::name(), serHidden);
    return props;
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_topic(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_mqtt5::message::SubscribeFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::ListMembers::ElementMembers::Topic;
            auto props = cc_tools_qt_plugin::cc_mqtt5::field::createProps_topic(Field::name(), serHidden);
            return props;
        }

        struct OptionsMembers
        {
            static QVariantMap createProps_qos(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_mqtt5::message::SubscribeFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::ListMembers::ElementMembers::OptionsMembers::Qos;
                auto props = cc_tools_qt_plugin::cc_mqtt5::field::createProps_qos(Field::name(), serHidden);
                return props;
            }

            static QVariantMap createProps_bits(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_mqtt5::message::SubscribeFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::ListMembers::ElementMembers::OptionsMembers::Bits;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .add(0U, "NL")
                        .add(1U, "RAP")
                        .asMap();
            }

            static QVariantMap createProps_retainHandling(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_mqtt5::message::SubscribeFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::ListMembers::ElementMembers::OptionsMembers::RetainHandling;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .add("Send", 0)
                        .add("SendIfNotExists", 1)
                        .add("DontSend", 2)
                        .asMap();
            }

            static QVariantMap createProps_reserved(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_mqtt5::message::SubscribeFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::ListMembers::ElementMembers::OptionsMembers::Reserved;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .hidden()
                        .asMap();
            }
        }; // struct OptionsMembers

        static QVariantMap createProps_options(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_mqtt5::message::SubscribeFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::ListMembers::ElementMembers::Options;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(OptionsMembers::createProps_qos(true))
                    .add(OptionsMembers::createProps_bits(true))
                    .add(OptionsMembers::createProps_retainHandling(true))
                    .add(OptionsMembers::createProps_reserved(true))
                    .asMap();
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_mqtt5::message::SubscribeFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_topic(serHidden))
                .add(ElementMembers::createProps_options(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_mqtt5::message::SubscribeFields<cc_tools_qt_plugin::cc_mqtt5::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(ListMembers::createProps_element(serHidden))
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

Subscribe::Subscribe() = default;
Subscribe::~Subscribe() = default;
Subscribe& Subscribe::operator=(const Subscribe&) = default;
Subscribe& Subscribe::operator=(Subscribe&&) = default;

const QVariantList& Subscribe::fieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace message

} // namespace cc_mqtt5

} // namespace cc_tools_qt_plugin
