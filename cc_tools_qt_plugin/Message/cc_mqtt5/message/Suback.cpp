// Generated by commsdsl2tools_qt v7.0.2

#include "Suback.h"

#include "cc_mqtt5/message/Suback.h"
#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_mqtt5/Message.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_mqtt5
{

namespace message
{

class SubackImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_mqtt5::Message,
        ::cc_mqtt5::message::Suback,
        SubackImpl
    >
{
public:
    SubackImpl() = default;
    SubackImpl(const SubackImpl&) = default;
    SubackImpl(SubackImpl&&) = default;
    virtual ~SubackImpl() = default;
    SubackImpl& operator=(const SubackImpl&) = default;
    SubackImpl& operator=(SubackImpl&&) = default;
};

Suback::Suback() : m_pImpl(new SubackImpl) {}
Suback::~Suback() = default;

Suback& Suback::operator=(const Suback& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Suback& Suback::operator=(Suback&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Suback::nameImpl() const
{
    return m_pImpl->name();
}

bool Suback::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Suback::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Suback::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Suback::resetImpl()
{
    m_pImpl->reset();
}

bool Suback::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Suback*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Suback::isValidImpl() const
{
    return m_pImpl->isValid();
}

Suback::DataSeq Suback::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Suback::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Suback::Ptr Suback::cloneImpl() const
{
    ImplPtr impl(static_cast<SubackImpl*>(m_pImpl->clone().release()));
    return Ptr(new Suback(std::move(impl)));
}

void Suback::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Suback::DataSeq Suback::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Suback::FieldsList Suback::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Suback::FieldsList Suback::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Suback::Suback(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_mqtt5

} // namespace Message

} // namespace cc_tools_qt_plugin
