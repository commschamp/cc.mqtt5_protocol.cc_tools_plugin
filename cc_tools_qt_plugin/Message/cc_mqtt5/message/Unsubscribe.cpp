// Generated by commsdsl2tools_qt v7.0.0

#include "Unsubscribe.h"

#include "cc_mqtt5/message/Unsubscribe.h"
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

class UnsubscribeImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_mqtt5::Message,
        ::cc_mqtt5::message::Unsubscribe,
        UnsubscribeImpl
    >
{
public:
    UnsubscribeImpl() = default;
    UnsubscribeImpl(const UnsubscribeImpl&) = default;
    UnsubscribeImpl(UnsubscribeImpl&&) = default;
    virtual ~UnsubscribeImpl() = default;
    UnsubscribeImpl& operator=(const UnsubscribeImpl&) = default;
    UnsubscribeImpl& operator=(UnsubscribeImpl&&) = default;
};

Unsubscribe::Unsubscribe() : m_pImpl(new UnsubscribeImpl) {}
Unsubscribe::~Unsubscribe() = default;

Unsubscribe& Unsubscribe::operator=(const Unsubscribe& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Unsubscribe& Unsubscribe::operator=(Unsubscribe&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Unsubscribe::nameImpl() const
{
    return m_pImpl->name();
}

bool Unsubscribe::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong Unsubscribe::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString Unsubscribe::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void Unsubscribe::resetImpl()
{
    m_pImpl->reset();
}

bool Unsubscribe::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const Unsubscribe*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool Unsubscribe::isValidImpl() const
{
    return m_pImpl->isValid();
}

Unsubscribe::DataSeq Unsubscribe::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool Unsubscribe::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

Unsubscribe::Ptr Unsubscribe::cloneImpl() const
{
    ImplPtr impl(static_cast<UnsubscribeImpl*>(m_pImpl->clone().release()));
    return Ptr(new Unsubscribe(std::move(impl)));
}

void Unsubscribe::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

Unsubscribe::DataSeq Unsubscribe::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

Unsubscribe::FieldsList Unsubscribe::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

Unsubscribe::FieldsList Unsubscribe::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

Unsubscribe::Unsubscribe(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_mqtt5

} // namespace Message

} // namespace cc_tools_qt_plugin
