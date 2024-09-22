#pragma once
namespace Mema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button^ button1;
    protected:
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button18;
    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Button^ button20;
    private: System::Windows::Forms::Button^ button21;
    private: System::Windows::Forms::Button^ button22;
    private: System::Windows::Forms::Button^ button23;
    private: System::Windows::Forms::Button^ button24;
    private: System::Windows::Forms::Button^ button25;
    private: System::Windows::Forms::Button^ button26;
    private: System::Windows::Forms::Button^ button27;
    private: System::Windows::Forms::Button^ button28;
    private: System::Windows::Forms::Button^ button29;
    private: System::Windows::Forms::Button^ button30;
    private: System::Windows::Forms::Button^ button31;
    private: System::Windows::Forms::Button^ button32;
    private: System::Windows::Forms::Button^ button33;
    private: System::Windows::Forms::Button^ button34;
    private: System::Windows::Forms::Button^ button35;
    private: System::Windows::Forms::Button^ button36;
    private: System::Windows::Forms::Button^ button37;
    private: System::Windows::Forms::Button^ button38;
    private: System::Windows::Forms::Button^ button39;
    private: System::Windows::Forms::Button^ button40;
    private: System::Windows::Forms::Button^ button41;
    private: System::Windows::Forms::Button^ button42;
    private: System::Windows::Forms::Button^ button43;
    private: System::Windows::Forms::Button^ button44;
    private: System::Windows::Forms::Button^ button45;
    private: System::Windows::Forms::Button^ button46;
    private: System::Windows::Forms::Button^ button47;
    private: System::Windows::Forms::Button^ button48;
    private: System::Windows::Forms::Button^ button49;
    private: System::Windows::Forms::Button^ button50;
    private: System::Windows::Forms::Button^ button51;
    private: System::Windows::Forms::Button^ button52;
    private: System::Windows::Forms::Button^ button53;
    private: System::Windows::Forms::Button^ button54;
    private: System::Windows::Forms::Button^ button55;
    private: System::Windows::Forms::Button^ button56;
    private: System::Windows::Forms::Button^ button57;
    private: System::Windows::Forms::Button^ button58;
    private: System::Windows::Forms::Button^ button59;
    private: System::Windows::Forms::Button^ button60;
    private: System::Windows::Forms::Button^ button61;
    private: System::Windows::Forms::Button^ button62;
    private: System::Windows::Forms::Button^ button63;
    private: System::Windows::Forms::Button^ button64;
    private: System::Windows::Forms::Button^ button65;
    private: System::Windows::Forms::Button^ button66;
    private: System::Windows::Forms::Button^ button67;
    private: System::Windows::Forms::Button^ button68;
    private: System::Windows::Forms::Button^ button69;
    private: System::Windows::Forms::Button^ button70;
    private: System::Windows::Forms::Button^ button71;
    private: System::Windows::Forms::Button^ button72;
    private: System::Windows::Forms::Button^ button73;
    private: System::Windows::Forms::Button^ button74;
    private: System::Windows::Forms::Button^ button75;
    private: System::Windows::Forms::Button^ button76;
    private: System::Windows::Forms::Button^ button77;
    private: System::Windows::Forms::Button^ button78;
    private: System::Windows::Forms::Button^ button79;
    private: System::Windows::Forms::Button^ button80;
    private: System::Windows::Forms::Button^ button81;
    private: System::Windows::Forms::Button^ button82;
	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->button22 = (gcnew System::Windows::Forms::Button());
            this->button23 = (gcnew System::Windows::Forms::Button());
            this->button24 = (gcnew System::Windows::Forms::Button());
            this->button25 = (gcnew System::Windows::Forms::Button());
            this->button26 = (gcnew System::Windows::Forms::Button());
            this->button27 = (gcnew System::Windows::Forms::Button());
            this->button28 = (gcnew System::Windows::Forms::Button());
            this->button29 = (gcnew System::Windows::Forms::Button());
            this->button30 = (gcnew System::Windows::Forms::Button());
            this->button31 = (gcnew System::Windows::Forms::Button());
            this->button32 = (gcnew System::Windows::Forms::Button());
            this->button33 = (gcnew System::Windows::Forms::Button());
            this->button34 = (gcnew System::Windows::Forms::Button());
            this->button35 = (gcnew System::Windows::Forms::Button());
            this->button36 = (gcnew System::Windows::Forms::Button());
            this->button37 = (gcnew System::Windows::Forms::Button());
            this->button38 = (gcnew System::Windows::Forms::Button());
            this->button39 = (gcnew System::Windows::Forms::Button());
            this->button40 = (gcnew System::Windows::Forms::Button());
            this->button41 = (gcnew System::Windows::Forms::Button());
            this->button42 = (gcnew System::Windows::Forms::Button());
            this->button43 = (gcnew System::Windows::Forms::Button());
            this->button44 = (gcnew System::Windows::Forms::Button());
            this->button45 = (gcnew System::Windows::Forms::Button());
            this->button46 = (gcnew System::Windows::Forms::Button());
            this->button47 = (gcnew System::Windows::Forms::Button());
            this->button48 = (gcnew System::Windows::Forms::Button());
            this->button49 = (gcnew System::Windows::Forms::Button());
            this->button50 = (gcnew System::Windows::Forms::Button());
            this->button51 = (gcnew System::Windows::Forms::Button());
            this->button52 = (gcnew System::Windows::Forms::Button());
            this->button53 = (gcnew System::Windows::Forms::Button());
            this->button54 = (gcnew System::Windows::Forms::Button());
            this->button55 = (gcnew System::Windows::Forms::Button());
            this->button56 = (gcnew System::Windows::Forms::Button());
            this->button57 = (gcnew System::Windows::Forms::Button());
            this->button58 = (gcnew System::Windows::Forms::Button());
            this->button59 = (gcnew System::Windows::Forms::Button());
            this->button60 = (gcnew System::Windows::Forms::Button());
            this->button61 = (gcnew System::Windows::Forms::Button());
            this->button62 = (gcnew System::Windows::Forms::Button());
            this->button63 = (gcnew System::Windows::Forms::Button());
            this->button64 = (gcnew System::Windows::Forms::Button());
            this->button65 = (gcnew System::Windows::Forms::Button());
            this->button66 = (gcnew System::Windows::Forms::Button());
            this->button67 = (gcnew System::Windows::Forms::Button());
            this->button68 = (gcnew System::Windows::Forms::Button());
            this->button69 = (gcnew System::Windows::Forms::Button());
            this->button70 = (gcnew System::Windows::Forms::Button());
            this->button71 = (gcnew System::Windows::Forms::Button());
            this->button72 = (gcnew System::Windows::Forms::Button());
            this->button73 = (gcnew System::Windows::Forms::Button());
            this->button74 = (gcnew System::Windows::Forms::Button());
            this->button75 = (gcnew System::Windows::Forms::Button());
            this->button76 = (gcnew System::Windows::Forms::Button());
            this->button77 = (gcnew System::Windows::Forms::Button());
            this->button78 = (gcnew System::Windows::Forms::Button());
            this->button79 = (gcnew System::Windows::Forms::Button());
            this->button80 = (gcnew System::Windows::Forms::Button());
            this->button81 = (gcnew System::Windows::Forms::Button());
            this->button82 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button1->Location = System::Drawing::Point(3, 3);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(65, 35);
            this->button1->TabIndex = 0;
            this->button1->Text = L"esc";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
            this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button2->Location = System::Drawing::Point(3, 44);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(31, 56);
            this->button2->TabIndex = 1;
            this->button2->Text = L"~    \r\n    `";
            this->button2->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button3->Location = System::Drawing::Point(3, 106);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(63, 56);
            this->button3->TabIndex = 2;
            this->button3->Text = L"Tab";
            this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->button3->UseVisualStyleBackColor = false;
            // 
            // button4
            // 
            this->button4->AllowDrop = true;
            this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button4->Location = System::Drawing::Point(3, 168);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(79, 56);
            this->button4->TabIndex = 3;
            this->button4->Text = L"Caps Lock  ⇥";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->UseWaitCursor = true;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button5->Location = System::Drawing::Point(3, 230);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(105, 56);
            this->button5->TabIndex = 4;
            this->button5->Text = L"Shift  ↑";
            this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->button5->UseVisualStyleBackColor = false;
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button6->Location = System::Drawing::Point(3, 292);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(55, 56);
            this->button6->TabIndex = 5;
            this->button6->Text = L"Ctrl";
            this->button6->UseVisualStyleBackColor = false;
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button7->Location = System::Drawing::Point(74, 3);
            this->button7->Name = L"button7";
            this->button7->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->button7->Size = System::Drawing::Size(69, 35);
            this->button7->TabIndex = 6;
            this->button7->Text = L"f1";
            this->button7->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button7->UseVisualStyleBackColor = false;
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button8->Location = System::Drawing::Point(149, 3);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(69, 35);
            this->button8->TabIndex = 7;
            this->button8->Text = L"f2";
            this->button8->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button8->UseVisualStyleBackColor = false;
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button9->Location = System::Drawing::Point(223, 3);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(69, 35);
            this->button9->TabIndex = 8;
            this->button9->Text = L"f3";
            this->button9->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button9->UseVisualStyleBackColor = false;
            // 
            // button10
            // 
            this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button10->Location = System::Drawing::Point(298, 3);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(69, 35);
            this->button10->TabIndex = 9;
            this->button10->Text = L"f4";
            this->button10->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button10->UseVisualStyleBackColor = false;
            // 
            // button11
            // 
            this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button11->Location = System::Drawing::Point(373, 3);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(68, 35);
            this->button11->TabIndex = 10;
            this->button11->Text = L"f5";
            this->button11->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button11->UseVisualStyleBackColor = false;
            // 
            // button12
            // 
            this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button12->Location = System::Drawing::Point(447, 3);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(68, 35);
            this->button12->TabIndex = 11;
            this->button12->Text = L"f6";
            this->button12->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button12->UseVisualStyleBackColor = false;
            // 
            // button13
            // 
            this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button13->Location = System::Drawing::Point(521, 3);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(68, 35);
            this->button13->TabIndex = 12;
            this->button13->Text = L"f7";
            this->button13->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button13->UseVisualStyleBackColor = false;
            // 
            // button14
            // 
            this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button14->Location = System::Drawing::Point(595, 3);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(68, 35);
            this->button14->TabIndex = 13;
            this->button14->Text = L"f8";
            this->button14->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button14->UseVisualStyleBackColor = false;
            // 
            // button15
            // 
            this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button15->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button15->Location = System::Drawing::Point(743, 3);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(68, 35);
            this->button15->TabIndex = 14;
            this->button15->Text = L"f10";
            this->button15->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button15->UseVisualStyleBackColor = false;
            // 
            // button16
            // 
            this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button16->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button16->Location = System::Drawing::Point(817, 3);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(68, 35);
            this->button16->TabIndex = 15;
            this->button16->Text = L"f11";
            this->button16->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button16->UseVisualStyleBackColor = false;
            // 
            // button18
            // 
            this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button18->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button18->Location = System::Drawing::Point(891, 3);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(63, 35);
            this->button18->TabIndex = 17;
            this->button18->Text = L"f12";
            this->button18->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button18->UseVisualStyleBackColor = false;
            // 
            // button19
            // 
            this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button19->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button19->Location = System::Drawing::Point(669, 3);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(68, 35);
            this->button19->TabIndex = 18;
            this->button19->Text = L"f9";
            this->button19->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button19->UseVisualStyleBackColor = false;
            // 
            // button20
            // 
            this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button20->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button20->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button20->Location = System::Drawing::Point(40, 44);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(55, 56);
            this->button20->TabIndex = 19;
            this->button20->Text = L"!                   1";
            this->button20->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button20->UseVisualStyleBackColor = false;
            // 
            // button21
            // 
            this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button21->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button21->Location = System::Drawing::Point(101, 44);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(55, 56);
            this->button21->TabIndex = 20;
            this->button21->Text = L"@                2";
            this->button21->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button21->UseVisualStyleBackColor = false;
            // 
            // button22
            // 
            this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
            this->button22->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button22->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button22->Location = System::Drawing::Point(162, 44);
            this->button22->Name = L"button22";
            this->button22->Size = System::Drawing::Size(55, 56);
            this->button22->TabIndex = 21;
            this->button22->Text = L"#                 3";
            this->button22->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button22->UseVisualStyleBackColor = false;
            // 
            // button23
            // 
            this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button23->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button23->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button23->Location = System::Drawing::Point(223, 44);
            this->button23->Name = L"button23";
            this->button23->Size = System::Drawing::Size(55, 56);
            this->button23->TabIndex = 22;
            this->button23->Text = L"$                 4";
            this->button23->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button23->UseVisualStyleBackColor = false;
            // 
            // button24
            // 
            this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button24->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button24->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button24->Location = System::Drawing::Point(284, 44);
            this->button24->Name = L"button24";
            this->button24->Size = System::Drawing::Size(55, 56);
            this->button24->TabIndex = 23;
            this->button24->Text = L"%                 5";
            this->button24->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button24->UseVisualStyleBackColor = false;
            // 
            // button25
            // 
            this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button25->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button25->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button25->Location = System::Drawing::Point(345, 44);
            this->button25->Name = L"button25";
            this->button25->Size = System::Drawing::Size(55, 56);
            this->button25->TabIndex = 24;
            this->button25->Text = L"^                6";
            this->button25->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button25->UseVisualStyleBackColor = false;
            // 
            // button26
            // 
            this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button26->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button26->Location = System::Drawing::Point(406, 44);
            this->button26->Name = L"button26";
            this->button26->Size = System::Drawing::Size(55, 56);
            this->button26->TabIndex = 25;
            this->button26->Text = L"&                    7";
            this->button26->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button26->UseVisualStyleBackColor = false;
            this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
            // 
            // button27
            // 
            this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button27->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button27->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button27->Location = System::Drawing::Point(467, 44);
            this->button27->Name = L"button27";
            this->button27->Size = System::Drawing::Size(55, 56);
            this->button27->TabIndex = 26;
            this->button27->Text = L"*                 8";
            this->button27->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button27->UseVisualStyleBackColor = false;
            this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
            // 
            // button28
            // 
            this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button28->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button28->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button28->Location = System::Drawing::Point(528, 44);
            this->button28->Name = L"button28";
            this->button28->Size = System::Drawing::Size(55, 56);
            this->button28->TabIndex = 27;
            this->button28->Text = L"(                   9";
            this->button28->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button28->UseVisualStyleBackColor = false;
            // 
            // button29
            // 
            this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button29->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button29->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button29->Location = System::Drawing::Point(589, 44);
            this->button29->Name = L"button29";
            this->button29->Size = System::Drawing::Size(55, 56);
            this->button29->TabIndex = 28;
            this->button29->Text = L")                   0";
            this->button29->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button29->UseVisualStyleBackColor = false;
            // 
            // button30
            // 
            this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button30->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button30->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button30->Location = System::Drawing::Point(650, 44);
            this->button30->Name = L"button30";
            this->button30->Size = System::Drawing::Size(55, 56);
            this->button30->TabIndex = 29;
            this->button30->Text = L"_                  -";
            this->button30->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button30->UseVisualStyleBackColor = false;
            // 
            // button31
            // 
            this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button31->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button31->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button31->Location = System::Drawing::Point(711, 44);
            this->button31->Name = L"button31";
            this->button31->Size = System::Drawing::Size(55, 56);
            this->button31->TabIndex = 30;
            this->button31->Text = L"+                 =";
            this->button31->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button31->UseVisualStyleBackColor = false;
            // 
            // button32
            // 
            this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button32->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button32->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button32->Location = System::Drawing::Point(772, 44);
            this->button32->Name = L"button32";
            this->button32->Size = System::Drawing::Size(113, 56);
            this->button32->TabIndex = 31;
            this->button32->Text = L"  ⟵       Backspace";
            this->button32->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->button32->UseVisualStyleBackColor = false;
            // 
            // button33
            // 
            this->button33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button33->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button33->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button33->Location = System::Drawing::Point(891, 44);
            this->button33->Name = L"button33";
            this->button33->Size = System::Drawing::Size(63, 56);
            this->button33->TabIndex = 32;
            this->button33->Text = L"Home";
            this->button33->UseVisualStyleBackColor = false;
            // 
            // button34
            // 
            this->button34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button34->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button34->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button34->Location = System::Drawing::Point(72, 106);
            this->button34->Name = L"button34";
            this->button34->Size = System::Drawing::Size(55, 56);
            this->button34->TabIndex = 33;
            this->button34->Text = L"Q";
            this->button34->UseVisualStyleBackColor = false;
            this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
            // 
            // button35
            // 
            this->button35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button35->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button35->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button35->Location = System::Drawing::Point(133, 106);
            this->button35->Name = L"button35";
            this->button35->Size = System::Drawing::Size(55, 56);
            this->button35->TabIndex = 34;
            this->button35->Text = L"W";
            this->button35->UseVisualStyleBackColor = false;
            // 
            // button36
            // 
            this->button36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button36->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button36->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button36->Location = System::Drawing::Point(194, 106);
            this->button36->Name = L"button36";
            this->button36->Size = System::Drawing::Size(55, 56);
            this->button36->TabIndex = 35;
            this->button36->Text = L"E";
            this->button36->UseVisualStyleBackColor = false;
            this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
            // 
            // button37
            // 
            this->button37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button37->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button37->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button37->Location = System::Drawing::Point(255, 106);
            this->button37->Name = L"button37";
            this->button37->Size = System::Drawing::Size(55, 56);
            this->button37->TabIndex = 36;
            this->button37->Text = L"R";
            this->button37->UseVisualStyleBackColor = false;
            // 
            // button38
            // 
            this->button38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button38->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button38->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button38->Location = System::Drawing::Point(316, 106);
            this->button38->Name = L"button38";
            this->button38->Size = System::Drawing::Size(55, 56);
            this->button38->TabIndex = 37;
            this->button38->Text = L"T";
            this->button38->UseVisualStyleBackColor = false;
            // 
            // button39
            // 
            this->button39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button39->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button39->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button39->Location = System::Drawing::Point(377, 106);
            this->button39->Name = L"button39";
            this->button39->Size = System::Drawing::Size(55, 56);
            this->button39->TabIndex = 38;
            this->button39->Text = L"Y";
            this->button39->UseVisualStyleBackColor = false;
            // 
            // button40
            // 
            this->button40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button40->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button40->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button40->Location = System::Drawing::Point(438, 106);
            this->button40->Name = L"button40";
            this->button40->Size = System::Drawing::Size(55, 56);
            this->button40->TabIndex = 39;
            this->button40->Text = L"U";
            this->button40->UseVisualStyleBackColor = false;
            // 
            // button41
            // 
            this->button41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button41->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button41->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button41->Location = System::Drawing::Point(499, 106);
            this->button41->Name = L"button41";
            this->button41->Size = System::Drawing::Size(55, 56);
            this->button41->TabIndex = 40;
            this->button41->Text = L"I";
            this->button41->UseVisualStyleBackColor = false;
            // 
            // button42
            // 
            this->button42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button42->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button42->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button42->Location = System::Drawing::Point(560, 106);
            this->button42->Name = L"button42";
            this->button42->Size = System::Drawing::Size(55, 56);
            this->button42->TabIndex = 41;
            this->button42->Text = L"O";
            this->button42->UseVisualStyleBackColor = false;
            // 
            // button43
            // 
            this->button43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button43->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button43->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button43->Location = System::Drawing::Point(621, 106);
            this->button43->Name = L"button43";
            this->button43->Size = System::Drawing::Size(55, 56);
            this->button43->TabIndex = 42;
            this->button43->Text = L"P";
            this->button43->UseVisualStyleBackColor = false;
            // 
            // button44
            // 
            this->button44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button44->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button44->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button44->Location = System::Drawing::Point(682, 106);
            this->button44->Name = L"button44";
            this->button44->Size = System::Drawing::Size(55, 56);
            this->button44->TabIndex = 43;
            this->button44->Text = L"{                   [";
            this->button44->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button44->UseVisualStyleBackColor = false;
            // 
            // button45
            // 
            this->button45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button45->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button45->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button45->Location = System::Drawing::Point(743, 106);
            this->button45->Name = L"button45";
            this->button45->Size = System::Drawing::Size(55, 56);
            this->button45->TabIndex = 44;
            this->button45->Text = L"}                   ]";
            this->button45->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button45->UseVisualStyleBackColor = false;
            // 
            // button46
            // 
            this->button46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button46->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button46->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button46->Location = System::Drawing::Point(804, 106);
            this->button46->Name = L"button46";
            this->button46->Size = System::Drawing::Size(81, 56);
            this->button46->TabIndex = 45;
            this->button46->Text = L"|     \r\n                \\";
            this->button46->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button46->UseVisualStyleBackColor = false;
            // 
            // button47
            // 
            this->button47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button47->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button47->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button47->Location = System::Drawing::Point(891, 106);
            this->button47->Name = L"button47";
            this->button47->Size = System::Drawing::Size(63, 56);
            this->button47->TabIndex = 46;
            this->button47->Text = L"pg up";
            this->button47->UseVisualStyleBackColor = false;
            // 
            // button48
            // 
            this->button48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button48->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button48->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button48->Location = System::Drawing::Point(88, 168);
            this->button48->Name = L"button48";
            this->button48->Size = System::Drawing::Size(55, 56);
            this->button48->TabIndex = 47;
            this->button48->Text = L"A";
            this->button48->UseVisualStyleBackColor = false;
            // 
            // button49
            // 
            this->button49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button49->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button49->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button49->Location = System::Drawing::Point(149, 168);
            this->button49->Name = L"button49";
            this->button49->Size = System::Drawing::Size(55, 56);
            this->button49->TabIndex = 48;
            this->button49->Text = L"S";
            this->button49->UseVisualStyleBackColor = false;
            // 
            // button50
            // 
            this->button50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button50->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button50->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button50->Location = System::Drawing::Point(210, 168);
            this->button50->Name = L"button50";
            this->button50->Size = System::Drawing::Size(55, 56);
            this->button50->TabIndex = 49;
            this->button50->Text = L"D";
            this->button50->UseVisualStyleBackColor = false;
            // 
            // button51
            // 
            this->button51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button51->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button51->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button51->Location = System::Drawing::Point(271, 168);
            this->button51->Name = L"button51";
            this->button51->Size = System::Drawing::Size(55, 56);
            this->button51->TabIndex = 50;
            this->button51->Text = L"F";
            this->button51->UseVisualStyleBackColor = false;
            // 
            // button52
            // 
            this->button52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button52->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button52->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button52->Location = System::Drawing::Point(332, 168);
            this->button52->Name = L"button52";
            this->button52->Size = System::Drawing::Size(55, 56);
            this->button52->TabIndex = 51;
            this->button52->Text = L"G";
            this->button52->UseVisualStyleBackColor = false;
            // 
            // button53
            // 
            this->button53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button53->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button53->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button53->Location = System::Drawing::Point(393, 168);
            this->button53->Name = L"button53";
            this->button53->Size = System::Drawing::Size(55, 56);
            this->button53->TabIndex = 52;
            this->button53->Text = L"H";
            this->button53->UseVisualStyleBackColor = false;
            // 
            // button54
            // 
            this->button54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button54->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button54->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button54->Location = System::Drawing::Point(454, 168);
            this->button54->Name = L"button54";
            this->button54->Size = System::Drawing::Size(55, 56);
            this->button54->TabIndex = 53;
            this->button54->Text = L"J";
            this->button54->UseVisualStyleBackColor = false;
            // 
            // button55
            // 
            this->button55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button55->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button55->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button55->Location = System::Drawing::Point(515, 168);
            this->button55->Name = L"button55";
            this->button55->Size = System::Drawing::Size(55, 56);
            this->button55->TabIndex = 54;
            this->button55->Text = L"K";
            this->button55->UseVisualStyleBackColor = false;
            // 
            // button56
            // 
            this->button56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button56->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button56->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button56->Location = System::Drawing::Point(576, 168);
            this->button56->Name = L"button56";
            this->button56->Size = System::Drawing::Size(55, 56);
            this->button56->TabIndex = 55;
            this->button56->Text = L"L";
            this->button56->UseVisualStyleBackColor = false;
            // 
            // button57
            // 
            this->button57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button57->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button57->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button57->Location = System::Drawing::Point(637, 168);
            this->button57->Name = L"button57";
            this->button57->Size = System::Drawing::Size(55, 56);
            this->button57->TabIndex = 56;
            this->button57->Text = L":                   ;";
            this->button57->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button57->UseVisualStyleBackColor = false;
            // 
            // button58
            // 
            this->button58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button58->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button58->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button58->Location = System::Drawing::Point(698, 168);
            this->button58->Name = L"button58";
            this->button58->Size = System::Drawing::Size(55, 56);
            this->button58->TabIndex = 57;
            this->button58->Text = L"\"                   \'";
            this->button58->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button58->UseVisualStyleBackColor = false;
            // 
            // button59
            // 
            this->button59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button59->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button59->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button59->Location = System::Drawing::Point(759, 168);
            this->button59->Name = L"button59";
            this->button59->Size = System::Drawing::Size(126, 56);
            this->button59->TabIndex = 58;
            this->button59->Text = L"↲                     Enter";
            this->button59->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->button59->UseVisualStyleBackColor = false;
            // 
            // button60
            // 
            this->button60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button60->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button60->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button60->Location = System::Drawing::Point(891, 168);
            this->button60->Name = L"button60";
            this->button60->Size = System::Drawing::Size(63, 56);
            this->button60->TabIndex = 59;
            this->button60->Text = L"pg dn";
            this->button60->UseVisualStyleBackColor = false;
            // 
            // button61
            // 
            this->button61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button61->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button61->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button61->Location = System::Drawing::Point(114, 230);
            this->button61->Name = L"button61";
            this->button61->Size = System::Drawing::Size(55, 56);
            this->button61->TabIndex = 60;
            this->button61->Text = L"Z";
            this->button61->UseVisualStyleBackColor = false;
            this->button61->Click += gcnew System::EventHandler(this, &MyForm::button61_Click);
            // 
            // button62
            // 
            this->button62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button62->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button62->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button62->Location = System::Drawing::Point(175, 230);
            this->button62->Name = L"button62";
            this->button62->Size = System::Drawing::Size(55, 56);
            this->button62->TabIndex = 61;
            this->button62->Text = L"X";
            this->button62->UseVisualStyleBackColor = false;
            // 
            // button63
            // 
            this->button63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button63->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button63->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button63->Location = System::Drawing::Point(236, 230);
            this->button63->Name = L"button63";
            this->button63->Size = System::Drawing::Size(55, 56);
            this->button63->TabIndex = 62;
            this->button63->Text = L"C";
            this->button63->UseVisualStyleBackColor = false;
            // 
            // button64
            // 
            this->button64->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button64->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button64->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button64->Location = System::Drawing::Point(297, 230);
            this->button64->Name = L"button64";
            this->button64->Size = System::Drawing::Size(55, 56);
            this->button64->TabIndex = 63;
            this->button64->Text = L"V";
            this->button64->UseVisualStyleBackColor = false;
            // 
            // button65
            // 
            this->button65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button65->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button65->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button65->Location = System::Drawing::Point(358, 230);
            this->button65->Name = L"button65";
            this->button65->Size = System::Drawing::Size(55, 56);
            this->button65->TabIndex = 64;
            this->button65->Text = L"B";
            this->button65->UseVisualStyleBackColor = false;
            // 
            // button66
            // 
            this->button66->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button66->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button66->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button66->Location = System::Drawing::Point(419, 230);
            this->button66->Name = L"button66";
            this->button66->Size = System::Drawing::Size(55, 56);
            this->button66->TabIndex = 65;
            this->button66->Text = L"N";
            this->button66->UseVisualStyleBackColor = false;
            // 
            // button67
            // 
            this->button67->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button67->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button67->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button67->Location = System::Drawing::Point(480, 230);
            this->button67->Name = L"button67";
            this->button67->Size = System::Drawing::Size(55, 56);
            this->button67->TabIndex = 66;
            this->button67->Text = L"M";
            this->button67->UseVisualStyleBackColor = false;
            // 
            // button68
            // 
            this->button68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button68->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button68->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button68->Location = System::Drawing::Point(541, 230);
            this->button68->Name = L"button68";
            this->button68->Size = System::Drawing::Size(55, 56);
            this->button68->TabIndex = 67;
            this->button68->Text = L"<                  ,";
            this->button68->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button68->UseVisualStyleBackColor = false;
            // 
            // button69
            // 
            this->button69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button69->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button69->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button69->Location = System::Drawing::Point(602, 230);
            this->button69->Name = L"button69";
            this->button69->Size = System::Drawing::Size(55, 56);
            this->button69->TabIndex = 68;
            this->button69->Text = L">                  .";
            this->button69->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button69->UseVisualStyleBackColor = false;
            // 
            // button70
            // 
            this->button70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button70->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button70->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button70->Location = System::Drawing::Point(663, 230);
            this->button70->Name = L"button70";
            this->button70->Size = System::Drawing::Size(55, 56);
            this->button70->TabIndex = 69;
            this->button70->Text = L"\?                   /";
            this->button70->TextAlign = System::Drawing::ContentAlignment::TopLeft;
            this->button70->UseVisualStyleBackColor = false;
            // 
            // button71
            // 
            this->button71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button71->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button71->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button71->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
            this->button71->Location = System::Drawing::Point(724, 230);
            this->button71->Name = L"button71";
            this->button71->Size = System::Drawing::Size(161, 56);
            this->button71->TabIndex = 70;
            this->button71->Text = L"↑  Shift";
            this->button71->UseVisualStyleBackColor = false;
            // 
            // button72
            // 
            this->button72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button72->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button72->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button72->Location = System::Drawing::Point(891, 230);
            this->button72->Name = L"button72";
            this->button72->Size = System::Drawing::Size(63, 56);
            this->button72->TabIndex = 71;
            this->button72->Text = L"end";
            this->button72->UseVisualStyleBackColor = false;
            // 
            // button73
            // 
            this->button73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button73->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button73->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button73->Location = System::Drawing::Point(64, 292);
            this->button73->Name = L"button73";
            this->button73->Size = System::Drawing::Size(55, 56);
            this->button73->TabIndex = 72;
            this->button73->Text = L"fn";
            this->button73->UseVisualStyleBackColor = false;
            // 
            // button74
            // 
            this->button74->BackColor = System::Drawing::SystemColors::ButtonShadow;
            this->button74->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button74.BackgroundImage")));
            this->button74->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->button74->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button74->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button74->Location = System::Drawing::Point(125, 292);
            this->button74->Name = L"button74";
            this->button74->Size = System::Drawing::Size(55, 56);
            this->button74->TabIndex = 73;
            this->button74->UseVisualStyleBackColor = false;
            // 
            // button75
            // 
            this->button75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button75->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button75->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button75->Location = System::Drawing::Point(186, 292);
            this->button75->Name = L"button75";
            this->button75->Size = System::Drawing::Size(65, 56);
            this->button75->TabIndex = 74;
            this->button75->Text = L"Alt";
            this->button75->UseVisualStyleBackColor = false;
            // 
            // button76
            // 
            this->button76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button76->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button76->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button76->Location = System::Drawing::Point(637, 292);
            this->button76->Name = L"button76";
            this->button76->Size = System::Drawing::Size(65, 56);
            this->button76->TabIndex = 75;
            this->button76->Text = L"Alt";
            this->button76->UseVisualStyleBackColor = false;
            // 
            // button77
            // 
            this->button77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button77->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button77->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button77->Location = System::Drawing::Point(708, 292);
            this->button77->Name = L"button77";
            this->button77->Size = System::Drawing::Size(55, 56);
            this->button77->TabIndex = 76;
            this->button77->Text = L"Ctrl";
            this->button77->UseVisualStyleBackColor = false;
            // 
            // button78
            // 
            this->button78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button78->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button78->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button78->Location = System::Drawing::Point(769, 292);
            this->button78->Name = L"button78";
            this->button78->Size = System::Drawing::Size(55, 56);
            this->button78->TabIndex = 77;
            this->button78->Text = L"〈";
            this->button78->UseVisualStyleBackColor = false;
            this->button78->Click += gcnew System::EventHandler(this, &MyForm::button78_Click);
            // 
            // button79
            // 
            this->button79->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button79->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button79->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button79->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button79->Location = System::Drawing::Point(830, 292);
            this->button79->Name = L"button79";
            this->button79->Size = System::Drawing::Size(55, 23);
            this->button79->TabIndex = 78;
            this->button79->Text = L"︿";
            this->button79->UseVisualStyleBackColor = false;
            // 
            // button80
            // 
            this->button80->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button80->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button80->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button80->Location = System::Drawing::Point(830, 325);
            this->button80->Name = L"button80";
            this->button80->Size = System::Drawing::Size(55, 23);
            this->button80->TabIndex = 79;
            this->button80->Text = L"﹀";
            this->button80->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button80->UseVisualStyleBackColor = false;
            this->button80->Click += gcnew System::EventHandler(this, &MyForm::button80_Click);
            // 
            // button81
            // 
            this->button81->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button81->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button81->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button81->Location = System::Drawing::Point(891, 292);
            this->button81->Name = L"button81";
            this->button81->Size = System::Drawing::Size(63, 56);
            this->button81->TabIndex = 80;
            this->button81->Text = L"〉";
            this->button81->UseVisualStyleBackColor = false;
            // 
            // button82
            // 
            this->button82->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->button82->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button82->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button82->Location = System::Drawing::Point(257, 292);
            this->button82->Name = L"button82";
            this->button82->Size = System::Drawing::Size(374, 56);
            this->button82->TabIndex = 81;
            this->button82->Text = L"Space";
            this->button82->UseVisualStyleBackColor = false;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
            this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->BackColor = System::Drawing::SystemColors::AppWorkspace;
            this->ClientSize = System::Drawing::Size(962, 358);
            this->Controls->Add(this->button82);
            this->Controls->Add(this->button81);
            this->Controls->Add(this->button80);
            this->Controls->Add(this->button79);
            this->Controls->Add(this->button78);
            this->Controls->Add(this->button77);
            this->Controls->Add(this->button76);
            this->Controls->Add(this->button75);
            this->Controls->Add(this->button74);
            this->Controls->Add(this->button73);
            this->Controls->Add(this->button72);
            this->Controls->Add(this->button71);
            this->Controls->Add(this->button70);
            this->Controls->Add(this->button69);
            this->Controls->Add(this->button68);
            this->Controls->Add(this->button67);
            this->Controls->Add(this->button66);
            this->Controls->Add(this->button65);
            this->Controls->Add(this->button64);
            this->Controls->Add(this->button63);
            this->Controls->Add(this->button62);
            this->Controls->Add(this->button61);
            this->Controls->Add(this->button60);
            this->Controls->Add(this->button59);
            this->Controls->Add(this->button58);
            this->Controls->Add(this->button57);
            this->Controls->Add(this->button56);
            this->Controls->Add(this->button55);
            this->Controls->Add(this->button54);
            this->Controls->Add(this->button53);
            this->Controls->Add(this->button52);
            this->Controls->Add(this->button51);
            this->Controls->Add(this->button50);
            this->Controls->Add(this->button49);
            this->Controls->Add(this->button48);
            this->Controls->Add(this->button47);
            this->Controls->Add(this->button46);
            this->Controls->Add(this->button45);
            this->Controls->Add(this->button44);
            this->Controls->Add(this->button43);
            this->Controls->Add(this->button42);
            this->Controls->Add(this->button41);
            this->Controls->Add(this->button40);
            this->Controls->Add(this->button39);
            this->Controls->Add(this->button38);
            this->Controls->Add(this->button37);
            this->Controls->Add(this->button36);
            this->Controls->Add(this->button35);
            this->Controls->Add(this->button34);
            this->Controls->Add(this->button33);
            this->Controls->Add(this->button32);
            this->Controls->Add(this->button31);
            this->Controls->Add(this->button30);
            this->Controls->Add(this->button29);
            this->Controls->Add(this->button28);
            this->Controls->Add(this->button27);
            this->Controls->Add(this->button26);
            this->Controls->Add(this->button25);
            this->Controls->Add(this->button24);
            this->Controls->Add(this->button23);
            this->Controls->Add(this->button22);
            this->Controls->Add(this->button21);
            this->Controls->Add(this->button20);
            this->Controls->Add(this->button19);
            this->Controls->Add(this->button18);
            this->Controls->Add(this->button16);
            this->Controls->Add(this->button15);
            this->Controls->Add(this->button14);
            this->Controls->Add(this->button13);
            this->Controls->Add(this->button12);
            this->Controls->Add(this->button11);
            this->Controls->Add(this->button10);
            this->Controls->Add(this->button9);
            this->Controls->Add(this->button8);
            this->Controls->Add(this->button7);
            this->Controls->Add(this->button6);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->ForeColor = System::Drawing::SystemColors::ControlText;
            this->IsMdiContainer = true;
            this->MaximizeBox = false;
            this->MinimizeBox = false;
            this->Name = L"MyForm";
            this->ShowIcon = false;
            this->TopMost = true;
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button78_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button61_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button80_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
  
}
};
}
