// DPSolidIProject.cpp 
#include <iostream>

using namespace std;

/*
class IMessage
{
public:
    virtual string& Text() = 0;
    virtual string& FromAddress() = 0;
    virtual string& ToAddress() = 0;
    virtual string& Subject() = 0;

    virtual int* Voice() = 0;

    virtual void Send() = 0;
};

class EmailMessage : public IMessage
{
    string text;
    string fromAddress;
    string toAddress;
    string subject;
public:
    string& Text() override { return text; }
    string& FromAddress() override { return fromAddress; }
    string& ToAddress() override { return toAddress; }
    string& Subject() override { return subject; }

};

class SmsMessage : public IMessage
{
    string text;
    string fromAddress;
    string toAddress;
public:
    string& Text() override { return text; }
    string& FromAddress() override { return fromAddress; }
    string& ToAddress() override { return toAddress; }
    string& Subject() override { }
};

class VoiceMessage : public IMessage
{
    string text;
    string fromAddress;
    string toAddress;
    int* voice;
public:
    string& Text() override { return text; }
    string& FromAddress() override { return fromAddress; }
    string& ToAddress() override { return toAddress; }
    string& Subject() override { }
    int* Voice() { return voice; }
};
*/

class IMessage
{
protected:
    string fromAddress;
    string toAddress;
public:
    virtual string& FromAddress() = 0;
    virtual string& ToAddress() = 0;

    virtual void Send() = 0;
};

class ITextMessage : public IMessage
{
protected:
    string text;
public:
    virtual string& Text() = 0;
};

class IVoiceMessage : public IMessage
{
public:
    virtual int*& Voice() = 0;
};

class EmailMessage : public ITextMessage
{
    string subject;
public:
    string& FromAddress() override { return fromAddress; }
    string& ToAddress() override { return toAddress; }
    string& Text() override { return text; }

    string& Subject() { return subject; }

    void Send() 
    {
        cout << "email message send\n";
    }
};

class VoiceMessage : public IVoiceMessage
{

};


int main()
{
    
}
