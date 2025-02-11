// Generated by commsdsl2tools_qt v7.0.3

#pragma once

#include <memory>
#include "cc_tools_qt/ToolsMessage.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_mqtt5
{

namespace message
{

class PubrecImpl;
class Pubrec : public cc_tools_qt::ToolsMessage
{
public:
    Pubrec();
    Pubrec(const Pubrec&) = delete;
    Pubrec(Pubrec&&) = delete;
    virtual ~Pubrec();
    Pubrec& operator=(const Pubrec& other);
    Pubrec& operator=(Pubrec&&);

protected:
    virtual const char* nameImpl() const override;
    virtual bool refreshMsgImpl() override;
    virtual qlonglong numericIdImpl() const override;
    virtual QString idAsStringImpl() const override;
    virtual void resetImpl() override;
    virtual bool assignImpl(const cc_tools_qt::ToolsMessage& other) override;
    virtual bool isValidImpl() const override;
    virtual DataSeq encodeDataImpl() const override;
    virtual bool decodeDataImpl(const DataSeq& data) override;
    virtual Ptr cloneImpl() const override;
    virtual void assignProtMessageImpl(void* protMsg) override;
    virtual DataSeq encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const override;
    virtual FieldsList transportFieldsImpl() override;
    virtual FieldsList payloadFieldsImpl() override;

private:
    using ImplPtr = std::unique_ptr<PubrecImpl>;

    Pubrec(ImplPtr&& impl);

    ImplPtr m_pImpl;
};

} // namespace message

} // namespace cc_mqtt5

} // namespace Message

} // namespace cc_tools_qt_plugin
