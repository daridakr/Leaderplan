#pragma once

namespace leaderplan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ refForm
	/// </summary>
	public ref class refForm : public System::Windows::Forms::Form
	{
	public:
		refForm(void)
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
		~refForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuElipse1;
	protected:

	private: System::Windows::Forms::Panel^ topPanel;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ refLabel;
	private: System::Windows::Forms::PictureBox^ refIcon;


	private: System::Windows::Forms::PictureBox^ closeWindow;
	private: Bunifu::Framework::UI::BunifuDragControl^ moverByText;
	private: Bunifu::Framework::UI::BunifuDragControl^ moverByPanel;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(refForm::typeid));
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->closeWindow = (gcnew System::Windows::Forms::PictureBox());
			this->refIcon = (gcnew System::Windows::Forms::PictureBox());
			this->refLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->moverByText = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->moverByPanel = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->topPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closeWindow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refIcon))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 5;
			this->bunifuElipse1->TargetControl = this;
			// 
			// topPanel
			// 
			this->topPanel->BackColor = System::Drawing::Color::CornflowerBlue;
			this->topPanel->Controls->Add(this->closeWindow);
			this->topPanel->Controls->Add(this->refIcon);
			this->topPanel->Controls->Add(this->refLabel);
			this->topPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->topPanel->Location = System::Drawing::Point(0, 0);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(297, 57);
			this->topPanel->TabIndex = 0;
			// 
			// closeWindow
			// 
			this->closeWindow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->closeWindow->BackColor = System::Drawing::Color::CornflowerBlue;
			this->closeWindow->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closeWindow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeWindow.Image")));
			this->closeWindow->Location = System::Drawing::Point(261, 12);
			this->closeWindow->Name = L"closeWindow";
			this->closeWindow->Size = System::Drawing::Size(24, 30);
			this->closeWindow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->closeWindow->TabIndex = 11;
			this->closeWindow->TabStop = false;
			this->closeWindow->Click += gcnew System::EventHandler(this, &refForm::closeWindow_Click);
			// 
			// refIcon
			// 
			this->refIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refIcon.Image")));
			this->refIcon->Location = System::Drawing::Point(12, 3);
			this->refIcon->Name = L"refIcon";
			this->refIcon->Size = System::Drawing::Size(35, 47);
			this->refIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->refIcon->TabIndex = 1;
			this->refIcon->TabStop = false;
			// 
			// refLabel
			// 
			this->refLabel->AutoSize = true;
			this->refLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->refLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->refLabel->Location = System::Drawing::Point(109, 20);
			this->refLabel->Name = L"refLabel";
			this->refLabel->Size = System::Drawing::Size(75, 20);
			this->refLabel->TabIndex = 13;
			this->refLabel->Text = L"—правка";
			// 
			// moverByText
			// 
			this->moverByText->Fixed = true;
			this->moverByText->Horizontal = true;
			this->moverByText->TargetControl = this->refLabel;
			this->moverByText->Vertical = true;
			// 
			// moverByPanel
			// 
			this->moverByPanel->Fixed = true;
			this->moverByPanel->Horizontal = true;
			this->moverByPanel->TargetControl = this->topPanel;
			this->moverByPanel->Vertical = true;
			// 
			// refForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->ClientSize = System::Drawing::Size(297, 428);
			this->Controls->Add(this->topPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"refForm";
			this->Text = L"refForm";
			this->topPanel->ResumeLayout(false);
			this->topPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closeWindow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refIcon))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void closeWindow_Click(System::Object^ sender, System::EventArgs^ e)
	{
		refForm::Close();
	}
};
}
