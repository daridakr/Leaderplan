#pragma once

namespace leaderplan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для fontSettings
	/// </summary>
	public ref class fontSettings : public System::Windows::Forms::Form
	{
	public:
		fontSettings(void)
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
		~fontSettings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuElipse1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: Bunifu::Framework::UI::BunifuFlatButton^ changedFontButton;
	private: Bunifu::Framework::UI::BunifuFlatButton^ changedColorButton;


	private: WindowsFormsControlLibrary1::BunifuThinButton^ bunifuThinButton2;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;




	protected:
	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(fontSettings::typeid));
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->changedFontButton = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->changedColorButton = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuThinButton2 = (gcnew WindowsFormsControlLibrary1::BunifuThinButton());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->SuspendLayout();
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 5;
			this->bunifuElipse1->TargetControl = this;
			// 
			// changedFontButton
			// 
			this->changedFontButton->Activecolor = System::Drawing::SystemColors::HotTrack;
			this->changedFontButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->changedFontButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->changedFontButton->BorderRadius = 0;
			this->changedFontButton->ButtonText = L"   Изменить шрифт";
			this->changedFontButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->changedFontButton->Iconcolor = System::Drawing::Color::Transparent;
			this->changedFontButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"changedFontButton.Iconimage")));
			this->changedFontButton->Iconimage_right = nullptr;
			this->changedFontButton->Iconimage_right_Selected = nullptr;
			this->changedFontButton->Iconimage_Selected = nullptr;
			this->changedFontButton->IconZoom = 45;
			this->changedFontButton->IsTab = false;
			this->changedFontButton->Location = System::Drawing::Point(133, 103);
			this->changedFontButton->Name = L"changedFontButton";
			this->changedFontButton->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->changedFontButton->OnHovercolor = System::Drawing::Color::CornflowerBlue;
			this->changedFontButton->OnHoverTextColor = System::Drawing::Color::White;
			this->changedFontButton->selected = false;
			this->changedFontButton->Size = System::Drawing::Size(212, 41);
			this->changedFontButton->TabIndex = 2;
			this->changedFontButton->Textcolor = System::Drawing::Color::White;
			this->changedFontButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->changedFontButton->Click += gcnew System::EventHandler(this, &fontSettings::changedFontButton_Click);
			// 
			// changedColorButton
			// 
			this->changedColorButton->Activecolor = System::Drawing::SystemColors::HotTrack;
			this->changedColorButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->changedColorButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->changedColorButton->BorderRadius = 0;
			this->changedColorButton->ButtonText = L"   Изменить цвет";
			this->changedColorButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->changedColorButton->Iconcolor = System::Drawing::Color::Transparent;
			this->changedColorButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"changedColorButton.Iconimage")));
			this->changedColorButton->Iconimage_right = nullptr;
			this->changedColorButton->Iconimage_right_Selected = nullptr;
			this->changedColorButton->Iconimage_Selected = nullptr;
			this->changedColorButton->IconZoom = 35;
			this->changedColorButton->IsTab = false;
			this->changedColorButton->Location = System::Drawing::Point(133, 159);
			this->changedColorButton->Name = L"changedColorButton";
			this->changedColorButton->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->changedColorButton->OnHovercolor = System::Drawing::Color::CornflowerBlue;
			this->changedColorButton->OnHoverTextColor = System::Drawing::Color::White;
			this->changedColorButton->selected = false;
			this->changedColorButton->Size = System::Drawing::Size(212, 41);
			this->changedColorButton->TabIndex = 3;
			this->changedColorButton->Textcolor = System::Drawing::Color::White;
			this->changedColorButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->changedColorButton->Click += gcnew System::EventHandler(this, &fontSettings::changedColorButton_Click);
			// 
			// bunifuThinButton2
			// 
			this->bunifuThinButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton2.BackgroundImage")));
			this->bunifuThinButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuThinButton2->ButtonText = L"Применить";
			this->bunifuThinButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->bunifuThinButton2->ForeColorHoverState = System::Drawing::Color::White;
			this->bunifuThinButton2->Iconimage = nullptr;
			this->bunifuThinButton2->IconVisible = true;
			this->bunifuThinButton2->IconZoom = 90;
			this->bunifuThinButton2->ImageIconOverlay = false;
			this->bunifuThinButton2->Location = System::Drawing::Point(360, 252);
			this->bunifuThinButton2->Name = L"bunifuThinButton2";
			this->bunifuThinButton2->Size = System::Drawing::Size(117, 39);
			this->bunifuThinButton2->TabIndex = 33;
			// 
			// fontSettings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->ClientSize = System::Drawing::Size(489, 303);
			this->Controls->Add(this->bunifuThinButton2);
			this->Controls->Add(this->changedColorButton);
			this->Controls->Add(this->changedFontButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"fontSettings";
			this->Text = L"fontSettings";
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void changedFontButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	fontDialog1->ShowDialog();
}

private: System::Void changedColorButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	colorDialog1->ShowDialog();
}
};
}
