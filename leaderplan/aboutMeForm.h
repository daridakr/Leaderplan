#pragma once

namespace leaderplan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для aboutMeForm
	/// </summary>
	public ref class aboutMeForm : public System::Windows::Forms::Form
	{
	public:
		aboutMeForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~aboutMeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuElipse1;
	private: System::Windows::Forms::Panel^ topPanel;

	private: System::Windows::Forms::Panel^ rightPanel;

	private: System::Windows::Forms::Panel^ leftPanel;
	private: System::Windows::Forms::Panel^ bottomPanel;


	private: System::Windows::Forms::PictureBox^ closeWindow;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ aboutMeLabel;
	private: Bunifu::Framework::UI::BunifuDragControl^ moverByText;
	private: Bunifu::Framework::UI::BunifuDragControl^ moverByPanel;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ nameLabel;



	private: Bunifu::Framework::UI::BunifuCustomLabel^ mailLabel;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;


	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(aboutMeForm::typeid));
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->leftPanel = (gcnew System::Windows::Forms::Panel());
			this->rightPanel = (gcnew System::Windows::Forms::Panel());
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->aboutMeLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->closeWindow = (gcnew System::Windows::Forms::PictureBox());
			this->bottomPanel = (gcnew System::Windows::Forms::Panel());
			this->moverByText = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->moverByPanel = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->nameLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->mailLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->topPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closeWindow))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 5;
			this->bunifuElipse1->TargetControl = this;
			// 
			// leftPanel
			// 
			this->leftPanel->BackColor = System::Drawing::SystemColors::HotTrack;
			this->leftPanel->Location = System::Drawing::Point(0, 0);
			this->leftPanel->Name = L"leftPanel";
			this->leftPanel->Size = System::Drawing::Size(10, 362);
			this->leftPanel->TabIndex = 0;
			// 
			// rightPanel
			// 
			this->rightPanel->BackColor = System::Drawing::SystemColors::HotTrack;
			this->rightPanel->Location = System::Drawing::Point(370, 0);
			this->rightPanel->Name = L"rightPanel";
			this->rightPanel->Size = System::Drawing::Size(10, 362);
			this->rightPanel->TabIndex = 1;
			// 
			// topPanel
			// 
			this->topPanel->BackColor = System::Drawing::SystemColors::HotTrack;
			this->topPanel->Controls->Add(this->aboutMeLabel);
			this->topPanel->Controls->Add(this->closeWindow);
			this->topPanel->Location = System::Drawing::Point(0, 0);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(380, 40);
			this->topPanel->TabIndex = 2;
			// 
			// aboutMeLabel
			// 
			this->aboutMeLabel->AutoSize = true;
			this->aboutMeLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutMeLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->aboutMeLabel->Location = System::Drawing::Point(124, 9);
			this->aboutMeLabel->Name = L"aboutMeLabel";
			this->aboutMeLabel->Size = System::Drawing::Size(132, 20);
			this->aboutMeLabel->TabIndex = 14;
			this->aboutMeLabel->Text = L"О разработчике";
			// 
			// closeWindow
			// 
			this->closeWindow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->closeWindow->BackColor = System::Drawing::SystemColors::HotTrack;
			this->closeWindow->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closeWindow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeWindow.Image")));
			this->closeWindow->Location = System::Drawing::Point(345, 7);
			this->closeWindow->Name = L"closeWindow";
			this->closeWindow->Size = System::Drawing::Size(24, 30);
			this->closeWindow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->closeWindow->TabIndex = 12;
			this->closeWindow->TabStop = false;
			this->closeWindow->Click += gcnew System::EventHandler(this, &aboutMeForm::closeWindow_Click);
			// 
			// bottomPanel
			// 
			this->bottomPanel->BackColor = System::Drawing::SystemColors::HotTrack;
			this->bottomPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->bottomPanel->Location = System::Drawing::Point(0, 342);
			this->bottomPanel->Name = L"bottomPanel";
			this->bottomPanel->Size = System::Drawing::Size(381, 11);
			this->bottomPanel->TabIndex = 0;
			// 
			// moverByText
			// 
			this->moverByText->Fixed = true;
			this->moverByText->Horizontal = true;
			this->moverByText->TargetControl = this->aboutMeLabel;
			this->moverByText->Vertical = true;
			// 
			// moverByPanel
			// 
			this->moverByPanel->Fixed = true;
			this->moverByPanel->Horizontal = true;
			this->moverByPanel->TargetControl = this->topPanel;
			this->moverByPanel->Vertical = true;
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->nameLabel->Location = System::Drawing::Point(77, 142);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(228, 20);
			this->nameLabel->TabIndex = 15;
			this->nameLabel->Text = L"Кривушкина Дарья Ивановна";
			// 
			// mailLabel
			// 
			this->mailLabel->AutoSize = true;
			this->mailLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mailLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->mailLabel->Location = System::Drawing::Point(113, 176);
			this->mailLabel->Name = L"mailLabel";
			this->mailLabel->Size = System::Drawing::Size(156, 20);
			this->mailLabel->TabIndex = 17;
			this->mailLabel->Text = L"электронная почта:";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel1->LinkColor = System::Drawing::SystemColors::Control;
			this->linkLabel1->Location = System::Drawing::Point(110, 210);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(159, 20);
			this->linkLabel1->TabIndex = 18;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"daridakr@gmail.com";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &aboutMeForm::linkLabel1_LinkClicked);
			// 
			// aboutMeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->ClientSize = System::Drawing::Size(381, 353);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->mailLabel);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->bottomPanel);
			this->Controls->Add(this->topPanel);
			this->Controls->Add(this->rightPanel);
			this->Controls->Add(this->leftPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"aboutMeForm";
			this->Text = L"aboutMeForm";
			this->Load += gcnew System::EventHandler(this, &aboutMeForm::aboutMeForm_Load);
			this->topPanel->ResumeLayout(false);
			this->topPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closeWindow))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void closeWindow_Click(System::Object^ sender, System::EventArgs^ e)
	{
		aboutMeForm::Close();
	}
private: System::Void aboutMeForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	//refLabel->Text = System::Diagnostics::Process::Start("http://daridakr@gmail.com/");
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	System::Diagnostics::Process::Start("http://daridakr@gmail.com/");
}
};
}
