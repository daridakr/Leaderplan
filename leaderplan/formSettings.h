#pragma once
#include "fontSettings.h"

namespace leaderplan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class formSettings : public System::Windows::Forms::Form
	{
	public:
		formSettings(void)
		{
			InitializeComponent();
			windowButton->Normalcolor = Color::FromArgb(14, 51, 119);
		}

	protected:
		~formSettings()
		{
			if (components)
			{
				delete components;
			}
		}

	private: 
		System::Windows::Forms::Panel^ leftPanel;
		System::Windows::Forms::Panel^ topPanel;
		System::Windows::Forms::PictureBox^ closeWindow;
		System::Windows::Forms::CheckBox^ checkBox1;
		System::Windows::Forms::GroupBox^ windowDecoration;
		System::Windows::Forms::RadioButton^ radioButton3;
		System::Windows::Forms::RadioButton^ radioButton2;
		System::Windows::Forms::RadioButton^ radioButton1;
		System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Panel^ childPanel;
		System::ComponentModel::IContainer^ components;
		Bunifu::Framework::UI::BunifuElipse^ bunifuElipse1;
		Bunifu::Framework::UI::BunifuCustomLabel^ formSettingsLabel;
		Bunifu::Framework::UI::BunifuFlatButton^ windowButton;
		Bunifu::Framework::UI::BunifuFlatButton^ fontButton;
		Bunifu::Framework::UI::BunifuDragControl^ moveByText;
		Bunifu::Framework::UI::BunifuDragControl^ moveByPanel;
		Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton3;
		Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton2;
		Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButton1;
		Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
		Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel2;
		Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel3;
		WindowsFormsControlLibrary1::BunifuThinButton^ bunifuThinButton2;

	private: System::Void closeWindow_Click(System::Object^ sender, System::EventArgs^ e)
	{
		formSettings::Close();
	}

	private: System::Void windowButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		windowButton->Normalcolor = Color::FromArgb(14, 51, 119);
		fontButton->Normalcolor = Color::FromArgb(0, 102, 204);

		closeChildForm(gcnew fontSettings());

		windowDecoration->Visible = true;
		bunifuThinButton2->Visible = true;
	}

	private: System::Void fontButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		fontButton->Normalcolor = Color::FromArgb(14, 51, 119);
		windowButton->Normalcolor = Color::FromArgb(0, 102, 204);

		windowDecoration->Visible = false;
		bunifuThinButton2->Visible = false;

		openChildForm(gcnew fontSettings());
	}

	private: Form^ activeForm = nullptr;

	private: System::Void openChildForm(Form^ childForm)
	{
		if (activeForm != nullptr)
			activeForm->Close();

		activeForm = childForm;
		
		childForm->TopLevel = false;
		childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		childForm->Dock = System::Windows::Forms::DockStyle::Fill;
		childPanel->Controls->Add(childForm);
		childPanel->Tag = childForm;
		childForm->BringToFront();
		childForm->Show();
	}

	private: System::Void closeChildForm(Form^ childForm)
	{
		if (activeForm = nullptr)
			activeForm->Close();
	}

	private:
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(formSettings::typeid));
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->leftPanel = (gcnew System::Windows::Forms::Panel());
			this->fontButton = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->windowButton = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->formSettingsLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->closeWindow = (gcnew System::Windows::Forms::PictureBox());
			this->moveByText = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->moveByPanel = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->windowDecoration = (gcnew System::Windows::Forms::GroupBox());
			this->bunifuCustomLabel3 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->bunifuImageButton3 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuThinButton2 = (gcnew WindowsFormsControlLibrary1::BunifuThinButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->childPanel = (gcnew System::Windows::Forms::Panel());
			this->leftPanel->SuspendLayout();
			this->topPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closeWindow))->BeginInit();
			this->windowDecoration->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 5;
			this->bunifuElipse1->TargetControl = this;
			// 
			// leftPanel
			// 
			this->leftPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->leftPanel->Controls->Add(this->fontButton);
			this->leftPanel->Controls->Add(this->windowButton);
			this->leftPanel->Location = System::Drawing::Point(0, 60);
			this->leftPanel->Name = L"leftPanel";
			this->leftPanel->Size = System::Drawing::Size(155, 303);
			this->leftPanel->TabIndex = 0;
			// 
			// fontButton
			// 
			this->fontButton->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->fontButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->fontButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->fontButton->BorderRadius = 0;
			this->fontButton->ButtonText = L"                 �����";
			this->fontButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fontButton->Iconcolor = System::Drawing::Color::Transparent;
			this->fontButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fontButton.Iconimage")));
			this->fontButton->Iconimage_right = nullptr;
			this->fontButton->Iconimage_right_Selected = nullptr;
			this->fontButton->Iconimage_Selected = nullptr;
			this->fontButton->IconZoom = 90;
			this->fontButton->IsTab = false;
			this->fontButton->Location = System::Drawing::Point(-50, 47);
			this->fontButton->Name = L"fontButton";
			this->fontButton->Normalcolor = System::Drawing::SystemColors::HotTrack;
			this->fontButton->OnHovercolor = System::Drawing::Color::CornflowerBlue;
			this->fontButton->OnHoverTextColor = System::Drawing::Color::White;
			this->fontButton->selected = false;
			this->fontButton->Size = System::Drawing::Size(212, 41);
			this->fontButton->TabIndex = 1;
			this->fontButton->Textcolor = System::Drawing::Color::White;
			this->fontButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fontButton->Click += gcnew System::EventHandler(this, &formSettings::fontButton_Click);
			// 
			// windowButton
			// 
			this->windowButton->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->windowButton->BackColor = System::Drawing::SystemColors::HotTrack;
			this->windowButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->windowButton->BorderRadius = 0;
			this->windowButton->ButtonText = L"                   ����";
			this->windowButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->windowButton->Iconcolor = System::Drawing::Color::Transparent;
			this->windowButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"windowButton.Iconimage")));
			this->windowButton->Iconimage_right = nullptr;
			this->windowButton->Iconimage_right_Selected = nullptr;
			this->windowButton->Iconimage_Selected = nullptr;
			this->windowButton->IconZoom = 90;
			this->windowButton->IsTab = false;
			this->windowButton->Location = System::Drawing::Point(-50, 0);
			this->windowButton->Name = L"windowButton";
			this->windowButton->Normalcolor = System::Drawing::SystemColors::HotTrack;
			this->windowButton->OnHovercolor = System::Drawing::Color::CornflowerBlue;
			this->windowButton->OnHoverTextColor = System::Drawing::Color::White;
			this->windowButton->selected = false;
			this->windowButton->Size = System::Drawing::Size(212, 41);
			this->windowButton->TabIndex = 0;
			this->windowButton->Textcolor = System::Drawing::Color::White;
			this->windowButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->windowButton->Click += gcnew System::EventHandler(this, &formSettings::windowButton_Click);
			// 
			// topPanel
			// 
			this->topPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->topPanel->Controls->Add(this->formSettingsLabel);
			this->topPanel->Controls->Add(this->closeWindow);
			this->topPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->topPanel->Location = System::Drawing::Point(0, 0);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(642, 60);
			this->topPanel->TabIndex = 0;
			// 
			// formSettingsLabel
			// 
			this->formSettingsLabel->AutoSize = true;
			this->formSettingsLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->formSettingsLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->formSettingsLabel->Location = System::Drawing::Point(241, 22);
			this->formSettingsLabel->Name = L"formSettingsLabel";
			this->formSettingsLabel->Size = System::Drawing::Size(139, 20);
			this->formSettingsLabel->TabIndex = 12;
			this->formSettingsLabel->Text = L"��������� ����";
			// 
			// closeWindow
			// 
			this->closeWindow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->closeWindow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->closeWindow->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closeWindow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeWindow.Image")));
			this->closeWindow->Location = System::Drawing::Point(606, 12);
			this->closeWindow->Name = L"closeWindow";
			this->closeWindow->Size = System::Drawing::Size(24, 30);
			this->closeWindow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->closeWindow->TabIndex = 10;
			this->closeWindow->TabStop = false;
			this->closeWindow->Click += gcnew System::EventHandler(this, &formSettings::closeWindow_Click);
			// 
			// moveByText
			// 
			this->moveByText->Fixed = true;
			this->moveByText->Horizontal = true;
			this->moveByText->TargetControl = this->formSettingsLabel;
			this->moveByText->Vertical = true;
			// 
			// moveByPanel
			// 
			this->moveByPanel->Fixed = true;
			this->moveByPanel->Horizontal = true;
			this->moveByPanel->TargetControl = this->topPanel;
			this->moveByPanel->Vertical = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox1->Location = System::Drawing::Point(93, 180);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(260, 21);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"��������� ������� ���� �������";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// windowDecoration
			// 
			this->windowDecoration->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->windowDecoration->Controls->Add(this->bunifuCustomLabel3);
			this->windowDecoration->Controls->Add(this->bunifuCustomLabel2);
			this->windowDecoration->Controls->Add(this->bunifuCustomLabel1);
			this->windowDecoration->Controls->Add(this->radioButton3);
			this->windowDecoration->Controls->Add(this->bunifuImageButton3);
			this->windowDecoration->Controls->Add(this->checkBox1);
			this->windowDecoration->Controls->Add(this->radioButton2);
			this->windowDecoration->Controls->Add(this->bunifuImageButton2);
			this->windowDecoration->Controls->Add(this->radioButton1);
			this->windowDecoration->Controls->Add(this->bunifuImageButton1);
			this->windowDecoration->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->windowDecoration->ForeColor = System::Drawing::SystemColors::Control;
			this->windowDecoration->Location = System::Drawing::Point(168, 78);
			this->windowDecoration->Name = L"windowDecoration";
			this->windowDecoration->Size = System::Drawing::Size(462, 215);
			this->windowDecoration->TabIndex = 31;
			this->windowDecoration->TabStop = false;
			this->windowDecoration->Text = L"�������� ���������� ����:";
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->AutoSize = true;
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel3->ForeColor = System::Drawing::SystemColors::Control;
			this->bunifuCustomLabel3->Location = System::Drawing::Point(373, 37);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(38, 17);
			this->bunifuCustomLabel3->TabIndex = 39;
			this->bunifuCustomLabel3->Text = L"Dark";
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel2->ForeColor = System::Drawing::SystemColors::Control;
			this->bunifuCustomLabel2->Location = System::Drawing::Point(214, 37);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(52, 17);
			this->bunifuCustomLabel2->TabIndex = 38;
			this->bunifuCustomLabel2->Text = L"Coffee";
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::SystemColors::Control;
			this->bunifuCustomLabel1->Location = System::Drawing::Point(54, 37);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(68, 17);
			this->bunifuCustomLabel1->TabIndex = 13;
			this->bunifuCustomLabel1->Text = L"Hot Track";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(325, 60);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(14, 13);
			this->radioButton3->TabIndex = 37;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->bunifuImageButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton3.Image")));
			this->bunifuImageButton3->ImageActive = nullptr;
			this->bunifuImageButton3->Location = System::Drawing::Point(345, 60);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(100, 100);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 36;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 10;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(171, 60);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 35;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(167)));
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(191, 60);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(100, 100);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 34;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(20, 60);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 33;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(40, 60);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(100, 100);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 32;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			// 
			// bunifuThinButton2
			// 
			this->bunifuThinButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton2.BackgroundImage")));
			this->bunifuThinButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuThinButton2->ButtonText = L"���������";
			this->bunifuThinButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->bunifuThinButton2->ForeColorHoverState = System::Drawing::Color::White;
			this->bunifuThinButton2->Iconimage = nullptr;
			this->bunifuThinButton2->IconVisible = true;
			this->bunifuThinButton2->IconZoom = 90;
			this->bunifuThinButton2->ImageIconOverlay = false;
			this->bunifuThinButton2->Location = System::Drawing::Point(513, 312);
			this->bunifuThinButton2->Name = L"bunifuThinButton2";
			this->bunifuThinButton2->Size = System::Drawing::Size(117, 39);
			this->bunifuThinButton2->TabIndex = 32;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(10, 363);
			this->panel1->TabIndex = 33;
			// 
			// childPanel
			// 
			this->childPanel->Location = System::Drawing::Point(153, 60);
			this->childPanel->Name = L"childPanel";
			this->childPanel->Size = System::Drawing::Size(489, 303);
			this->childPanel->TabIndex = 34;
			// 
			// formSettings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->ClientSize = System::Drawing::Size(642, 363);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->bunifuThinButton2);
			this->Controls->Add(this->windowDecoration);
			this->Controls->Add(this->leftPanel);
			this->Controls->Add(this->topPanel);
			this->Controls->Add(this->childPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"formSettings";
			this->Text = L"formSettings";
			this->leftPanel->ResumeLayout(false);
			this->topPanel->ResumeLayout(false);
			this->topPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closeWindow))->EndInit();
			this->windowDecoration->ResumeLayout(false);
			this->windowDecoration->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
