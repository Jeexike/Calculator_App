#pragma once
#include <math.h>
#include <Windows.h>

namespace FirstApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ result_label;
	private: System::Windows::Forms::Button^ btn_rem;
	private: System::Windows::Forms::Button^ btn_minus_plus;



	private: System::Windows::Forms::Button^ btn_clear;

	private: System::Windows::Forms::Button^ btn_div;

	private: System::Windows::Forms::Button^ btn_sq;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btn_min;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ btn_plus;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ btn_equal;



	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ btn_dot;

	private: System::Windows::Forms::Button^ btn_ing;
	private: System::Windows::Forms::Button^ btn_sqrt;
	private: System::Windows::Forms::Button^ btn_sin;
	private: System::Windows::Forms::Button^ btn_cos;
	private: System::Windows::Forms::Button^ btn_tan;
	private: System::Windows::Forms::Button^ btn_ln;
	private: System::Windows::Forms::Button^ btn_log;
	private: System::Windows::Forms::Button^ btn_sqr;

	private: double first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;
	private: int targetWidth, targetHeigth;











	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_nex;



	protected:

	protected:

	protected:

	protected:

	protected:

	protected:






	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->btn_rem = (gcnew System::Windows::Forms::Button());
			this->btn_minus_plus = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_div = (gcnew System::Windows::Forms::Button());
			this->btn_sq = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btn_min = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->btn_ing = (gcnew System::Windows::Forms::Button());
			this->btn_sqrt = (gcnew System::Windows::Forms::Button());
			this->btn_sin = (gcnew System::Windows::Forms::Button());
			this->btn_cos = (gcnew System::Windows::Forms::Button());
			this->btn_tan = (gcnew System::Windows::Forms::Button());
			this->btn_ln = (gcnew System::Windows::Forms::Button());
			this->btn_log = (gcnew System::Windows::Forms::Button());
			this->btn_sqr = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_nex = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(67)),
				static_cast<System::Int32>(static_cast<System::Byte>(67)));
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::Color::White;
			this->button_exit->Location = System::Drawing::Point(10, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(23, 23);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// result_label
			// 
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->ForeColor = System::Drawing::Color::White;
			this->result_label->Location = System::Drawing::Point(10, 37);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(278, 64);
			this->result_label->TabIndex = 1;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn_rem
			// 
			this->btn_rem->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_rem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_rem->ForeColor = System::Drawing::Color::White;
			this->btn_rem->Location = System::Drawing::Point(152, 104);
			this->btn_rem->Name = L"btn_rem";
			this->btn_rem->Size = System::Drawing::Size(65, 55);
			this->btn_rem->TabIndex = 13;
			this->btn_rem->Text = L"%";
			this->btn_rem->UseVisualStyleBackColor = false;
			this->btn_rem->Click += gcnew System::EventHandler(this, &MyForm::btn_rem_Click);
			// 
			// btn_minus_plus
			// 
			this->btn_minus_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_minus_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus_plus->ForeColor = System::Drawing::Color::White;
			this->btn_minus_plus->Location = System::Drawing::Point(81, 104);
			this->btn_minus_plus->Name = L"btn_minus_plus";
			this->btn_minus_plus->Size = System::Drawing::Size(65, 55);
			this->btn_minus_plus->TabIndex = 12;
			this->btn_minus_plus->Text = L"+/-";
			this->btn_minus_plus->UseVisualStyleBackColor = false;
			this->btn_minus_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_plus_Click);
			// 
			// btn_clear
			// 
			this->btn_clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_clear->ForeColor = System::Drawing::Color::White;
			this->btn_clear->Location = System::Drawing::Point(10, 104);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(65, 55);
			this->btn_clear->TabIndex = 11;
			this->btn_clear->Text = L"AC";
			this->btn_clear->UseVisualStyleBackColor = false;
			this->btn_clear->Click += gcnew System::EventHandler(this, &MyForm::btn_clear_Click);
			// 
			// btn_div
			// 
			this->btn_div->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_div->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_div->ForeColor = System::Drawing::Color::White;
			this->btn_div->Location = System::Drawing::Point(223, 104);
			this->btn_div->Name = L"btn_div";
			this->btn_div->Size = System::Drawing::Size(65, 55);
			this->btn_div->TabIndex = 14;
			this->btn_div->Text = L"/";
			this->btn_div->UseVisualStyleBackColor = false;
			this->btn_div->Click += gcnew System::EventHandler(this, &MyForm::btn_div_Click);
			// 
			// btn_sq
			// 
			this->btn_sq->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_sq->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_sq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_sq->ForeColor = System::Drawing::Color::White;
			this->btn_sq->Location = System::Drawing::Point(223, 177);
			this->btn_sq->Name = L"btn_sq";
			this->btn_sq->Size = System::Drawing::Size(65, 55);
			this->btn_sq->TabIndex = 18;
			this->btn_sq->Text = L"*";
			this->btn_sq->UseVisualStyleBackColor = false;
			this->btn_sq->Click += gcnew System::EventHandler(this, &MyForm::btn_sq_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(152, 177);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(65, 55);
			this->button2->TabIndex = 17;
			this->button2->Text = L"9";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(81, 177);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 55);
			this->button3->TabIndex = 16;
			this->button3->Text = L"8";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(10, 177);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(65, 55);
			this->button4->TabIndex = 15;
			this->button4->Text = L"7";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_min
			// 
			this->btn_min->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_min->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_min->ForeColor = System::Drawing::Color::White;
			this->btn_min->Location = System::Drawing::Point(223, 250);
			this->btn_min->Name = L"btn_min";
			this->btn_min->Size = System::Drawing::Size(65, 55);
			this->btn_min->TabIndex = 22;
			this->btn_min->Text = L"-";
			this->btn_min->UseVisualStyleBackColor = false;
			this->btn_min->Click += gcnew System::EventHandler(this, &MyForm::btn_min_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gray;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(152, 250);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 55);
			this->button6->TabIndex = 21;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(81, 250);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 55);
			this->button7->TabIndex = 20;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gray;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(10, 250);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 55);
			this->button8->TabIndex = 19;
			this->button8->Text = L"4";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plus->ForeColor = System::Drawing::Color::White;
			this->btn_plus->Location = System::Drawing::Point(223, 322);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(65, 55);
			this->btn_plus->TabIndex = 26;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Gray;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(152, 322);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(65, 55);
			this->button14->TabIndex = 25;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Gray;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(82, 322);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(65, 55);
			this->button15->TabIndex = 24;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Gray;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(10, 322);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(65, 55);
			this->button16->TabIndex = 23;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_equal
			// 
			this->btn_equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_equal->ForeColor = System::Drawing::Color::White;
			this->btn_equal->Location = System::Drawing::Point(223, 394);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(65, 55);
			this->btn_equal->TabIndex = 30;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = false;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Gray;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(10, 394);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(136, 55);
			this->button20->TabIndex = 27;
			this->button20->Text = L"0";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->BackColor = System::Drawing::Color::Gray;
			this->btn_dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_dot->Location = System::Drawing::Point(152, 394);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(65, 55);
			this->btn_dot->TabIndex = 31;
			this->btn_dot->Text = L",";
			this->btn_dot->UseVisualStyleBackColor = false;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_Click);
			// 
			// btn_ing
			// 
			this->btn_ing->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_ing->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_ing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ing->Location = System::Drawing::Point(303, 240);
			this->btn_ing->Name = L"btn_ing";
			this->btn_ing->Size = System::Drawing::Size(33, 78);
			this->btn_ing->TabIndex = 32;
			this->btn_ing->Text = L">";
			this->btn_ing->UseVisualStyleBackColor = false;
			this->btn_ing->Click += gcnew System::EventHandler(this, &MyForm::btn_ing_Click);
			// 
			// btn_sqrt
			// 
			this->btn_sqrt->BackColor = System::Drawing::Color::Gray;
			this->btn_sqrt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_sqrt->Location = System::Drawing::Point(352, 177);
			this->btn_sqrt->Name = L"btn_sqrt";
			this->btn_sqrt->Size = System::Drawing::Size(65, 55);
			this->btn_sqrt->TabIndex = 33;
			this->btn_sqrt->Text = L"sqrt";
			this->btn_sqrt->UseVisualStyleBackColor = false;
			this->btn_sqrt->Click += gcnew System::EventHandler(this, &MyForm::btn_sqrt_Click);
			// 
			// btn_sin
			// 
			this->btn_sin->BackColor = System::Drawing::Color::Gray;
			this->btn_sin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_sin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_sin->Location = System::Drawing::Point(423, 177);
			this->btn_sin->Name = L"btn_sin";
			this->btn_sin->Size = System::Drawing::Size(65, 55);
			this->btn_sin->TabIndex = 34;
			this->btn_sin->Text = L"sin";
			this->btn_sin->UseVisualStyleBackColor = false;
			this->btn_sin->Click += gcnew System::EventHandler(this, &MyForm::btn_sin_Click);
			// 
			// btn_cos
			// 
			this->btn_cos->BackColor = System::Drawing::Color::Gray;
			this->btn_cos->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_cos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_cos->Location = System::Drawing::Point(494, 177);
			this->btn_cos->Name = L"btn_cos";
			this->btn_cos->Size = System::Drawing::Size(65, 55);
			this->btn_cos->TabIndex = 35;
			this->btn_cos->Text = L"cos";
			this->btn_cos->UseVisualStyleBackColor = false;
			this->btn_cos->Click += gcnew System::EventHandler(this, &MyForm::btn_cos_Click);
			// 
			// btn_tan
			// 
			this->btn_tan->BackColor = System::Drawing::Color::Gray;
			this->btn_tan->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_tan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_tan->Location = System::Drawing::Point(352, 250);
			this->btn_tan->Name = L"btn_tan";
			this->btn_tan->Size = System::Drawing::Size(65, 55);
			this->btn_tan->TabIndex = 36;
			this->btn_tan->Text = L"tan";
			this->btn_tan->UseVisualStyleBackColor = false;
			this->btn_tan->Click += gcnew System::EventHandler(this, &MyForm::btn_tan_Click);
			// 
			// btn_ln
			// 
			this->btn_ln->BackColor = System::Drawing::Color::Gray;
			this->btn_ln->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_ln->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ln->Location = System::Drawing::Point(423, 250);
			this->btn_ln->Name = L"btn_ln";
			this->btn_ln->Size = System::Drawing::Size(65, 55);
			this->btn_ln->TabIndex = 37;
			this->btn_ln->Text = L"ln";
			this->btn_ln->UseVisualStyleBackColor = false;
			this->btn_ln->Click += gcnew System::EventHandler(this, &MyForm::btn_ln_Click);
			// 
			// btn_log
			// 
			this->btn_log->BackColor = System::Drawing::Color::Gray;
			this->btn_log->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_log->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_log->Location = System::Drawing::Point(494, 250);
			this->btn_log->Name = L"btn_log";
			this->btn_log->Size = System::Drawing::Size(65, 55);
			this->btn_log->TabIndex = 38;
			this->btn_log->Text = L"log";
			this->btn_log->UseVisualStyleBackColor = false;
			this->btn_log->Click += gcnew System::EventHandler(this, &MyForm::btn_log_Click);
			// 
			// btn_sqr
			// 
			this->btn_sqr->BackColor = System::Drawing::Color::Gray;
			this->btn_sqr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_sqr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_sqr->Location = System::Drawing::Point(423, 322);
			this->btn_sqr->Name = L"btn_sqr";
			this->btn_sqr->Size = System::Drawing::Size(65, 55);
			this->btn_sqr->TabIndex = 39;
			this->btn_sqr->Text = L"^";
			this->btn_sqr->UseVisualStyleBackColor = false;
			this->btn_sqr->Click += gcnew System::EventHandler(this, &MyForm::btn_sqr_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(352, 393);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 55);
			this->label1->TabIndex = 42;
			this->label1->Text = L"Engineering";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_nex
			// 
			this->btn_nex->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_nex->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_nex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_nex->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_nex->Location = System::Drawing::Point(40, 11);
			this->btn_nex->Name = L"btn_nex";
			this->btn_nex->Size = System::Drawing::Size(23, 23);
			this->btn_nex->TabIndex = 43;
			this->btn_nex->Text = L"---";
			this->btn_nex->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_nex->UseVisualStyleBackColor = false;
			this->btn_nex->Click += gcnew System::EventHandler(this, &MyForm::btn_nex_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(346, 459);
			this->ControlBox = false;
			this->Controls->Add(this->btn_nex);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_sqr);
			this->Controls->Add(this->btn_log);
			this->Controls->Add(this->btn_ln);
			this->Controls->Add(this->btn_tan);
			this->Controls->Add(this->btn_cos);
			this->Controls->Add(this->btn_sin);
			this->Controls->Add(this->btn_sqrt);
			this->Controls->Add(this->btn_ing);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->btn_min);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->btn_sq);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->btn_div);
			this->Controls->Add(this->btn_rem);
			this->Controls->Add(this->btn_minus_plus);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->result_label);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender);
		

		if (this->result_label->Text == "0" || is_equal) {
			this->result_label->Text = button->Text;
			is_equal = false;
		}
		else
		{
			this->result_label->Text = this->result_label->Text + button->Text;
		}
	}

	private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void btn_min_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void btn_sq_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void btn_div_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
	private: System::Void btn_rem_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('%');
	}
	private: System::Void math_action(char action) {
		this->first_num = System::Convert::ToDouble(this->result_label->Text);
		this->user_action = action;
		this->result_label->Text = "0";
	}
	private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ') {
			return;
		}
		double res;
		if (this->user_action == 's')
		{
			res = sqrt(first_num);
		}
		else if (this->user_action == 'i')
		{
			res = sin(first_num);
		}
		else if (this->user_action == 'c')
		{
			res = cos(first_num);
		}
		else if (this->user_action == 't')
		{
			res = tan(first_num);
		}
		else if (this->user_action == 'n')
		{
			res = log(first_num);
		}
		else if (this->user_action == 'l')
		{
			res = log10(first_num);
		}
		else
		{
			double second = System::Convert::ToDouble(this->result_label->Text);
			switch (this->user_action) {
			case '+': res = this->first_num + second; break;
			case '-': res = this->first_num - second; break;
			case '*': res = this->first_num * second; break;
			case '/':
				if (second == 0) {
					res = 0;
					this->result_label->ForeColor = Color::Red;
					MessageBox::Show(this, "The action is prohibited", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					res = this->first_num / second; break;
				}
			case '%': res = this->first_num * second / 100; break;
			case '^': res = pow(first_num, second);
			}
		}
		this->is_equal = true;
		this->result_label->Text = System::Convert::ToString(res);
	}
	private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->Text = "0";
		this->result_label->ForeColor = Color::White;
		this->first_num = 0;
		this->user_action = ' ';
		this->is_equal = false;
	}
	private: System::Void btn_minus_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		double num = System::Convert::ToDouble(this->result_label->Text);
		num *= -1;
		this->result_label->Text = System::Convert::ToString(num);
	}
	private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->result_label->Text;
		if (!text->Contains(",")) {
			this->result_label->Text = text + ",";
		}
	}
	private: System::Void btn_ing_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->btn_ing->Text == "<") {
			targetWidth = 459;
			targetHeigth = 346;
		}
		else {
			targetWidth = 600;
			targetHeigth = 346;
		}

		Timer^ timer = gcnew Timer();
		timer->Interval = 10;

		timer->Tick += gcnew EventHandler(this, &MyForm::OnTimerTick);
		timer->Start();

		this->targetHeigth = targetHeigth;
		this->targetWidth = targetWidth;

		if (this->btn_ing->Text == "<")
		{
			this->btn_ing->Location = System::Drawing::Point(301, 240);
			this->btn_ing->Text = ">";
			this->btn_ing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->Size = System::Drawing::Size(278, 64);
		}
		else
		{
			this->btn_ing->Location = System::Drawing::Point(568, 240);
			this->btn_ing->Text = "<";
			this->btn_ing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->Size = System::Drawing::Size(542, 64);
		}
	}
	private: System::Void OnTimerTick(System::Object^ sender, System::EventArgs^ e) {
		if (this->ClientSize.Width != this->targetWidth && this->targetWidth != 459) {
			float stepWidth = (this->targetWidth - this->ClientSize.Width) / 5; // шаг изменени€ ширины
			this->ClientSize = System::Drawing::Size(this->ClientSize.Width + stepWidth + 3, this->ClientSize.Height);
		}
		else if (this->ClientSize.Width != this->targetWidth && this->targetWidth == 459) {
			int stepWidth = (this->ClientSize.Width - this->targetWidth) / 5; // шаг изменени€ ширины
			this->ClientSize = System::Drawing::Size(this->ClientSize.Width - stepWidth - 23, this->ClientSize.Height);
		}
		else {
			Timer^ timer = dynamic_cast<Timer^>(sender);
			timer->Stop();
			delete timer;
		}
	}
	private: System::Void btn_sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('s');
	}
	private: System::Void btn_sin_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('i');
	}
	private: System::Void btn_cos_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('c');
	}
	private: System::Void btn_tan_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('t');
	}
	private: System::Void btn_ln_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('n');
	}
	private: System::Void btn_log_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('l');
	}
	private: System::Void btn_sqr_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('^');
	}
	private: System::Void btn_right_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('(');
	}
	private: System::Void btn_left_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action(')');
	}
	private: System::Void btn_nex_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
};
}
