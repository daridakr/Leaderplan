#pragma once

namespace leaderplan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для addNewDoing
	/// </summary>
	public ref class addNewDoing : public System::Windows::Forms::Form
	{
	public:
		addNewDoing()
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		String^ path = "E:\\leaderplan\\Release\\Data\\AllDoingsList.dat";

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~addNewDoing()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuElipse1;
	private: Bunifu::Framework::UI::BunifuDragControl^ moverByFirstGroupBox;




	private: Bunifu::Framework::UI::BunifuDragControl^ moverByText;








	private: System::Windows::Forms::Panel^ topPanel;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ titleOfWindow;
	private: DevComponents::DotNetBar::Controls::Line^ line3;
	private: DevComponents::DotNetBar::Controls::Line^ line1;
	private: System::Windows::Forms::PictureBox^ closeWindow;
	private: System::Windows::Forms::PictureBox^ expandWindowButton;
	private: System::Windows::Forms::RichTextBox^ descriptionOfDoingTextBox;

	private:




	private: Bunifu::Framework::UI::BunifuCustomLabel^ descriptionLabel;
	private: System::Windows::Forms::ComboBox^ choiceOfLevelOfDoingImportance;


	private: System::Windows::Forms::Button^ addDoingButton;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ nameOfDoingLabel;
	private: System::Windows::Forms::DateTimePicker^ choiceOfDeadline;

	private:

	private: Bunifu::Framework::UI::BunifuCustomLabel^ importanceOfDoingLabel;
	public: DevComponents::DotNetBar::ColorPickerButton^ colorOfTextDoing;
	private:

	private: DevComponents::DotNetBar::Controls::TextBoxX^ nameOfDoingTextBox;

	private:


	private:








	private: Bunifu::Framework::UI::BunifuCustomLabel^ deadlineLabel;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ colorOfTextDoingLabel;




	private: System::Windows::Forms::GroupBox^ allElementsRight;

	private: Bunifu::Framework::UI::BunifuDragControl^ moverByTopPanel;
	private: System::Windows::Forms::Label^ necessarilyItemLabel;




	private: Bunifu::Framework::UI::BunifuDragControl^ moverBySecondGroupBox;
	private: System::Windows::Forms::PictureBox^ minimizeWindowButton;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ colorOfBackColorDoingLabel;


	private: System::Windows::Forms::CheckBox^ isDeadline;
	private: System::Windows::Forms::GroupBox^ allElementsLeft;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ listOfAllDoingsLabel;
	private: DevComponents::DotNetBar::StyleManager^ styleManager1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;

	private:

	public:

private: DevComponents::DotNetBar::ButtonItem^ buttonItem1;
private: DevComponents::DotNetBar::ButtonItem^ buttonItem2;
private: DevComponents::DotNetBar::ItemContainer^ itemContainer1;
private: DevComponents::DotNetBar::GalleryContainer^ galleryContainer1;
private: DevComponents::DotNetBar::ComboBoxItem^ comboBoxItem1;
private: DevComponents::DotNetBar::LabelItem^ labelItem1;
private: DevComponents::DotNetBar::CheckBoxItem^ checkBoxItem1;
private: DevComponents::DotNetBar::CheckBoxItem^ checkBoxItem2;
private: DevComponents::DotNetBar::SliderItem^ sliderItem1;
private: DevComponents::DotNetBar::ColorPickerDropDown^ colorPickerDropDown1;
private: DevComponents::DotNetBar::ColorPickerDropDown^ colorPickerDropDown2;
private: DevComponents::DotNetBar::ColorPickerDropDown^ colorPickerDropDown3;
public: DevComponents::DotNetBar::ColorPickerButton^ colorOfBackColorDoing;
private:

private: System::Windows::Forms::CheckBox^ isBackColor;
private: System::Windows::Forms::CheckBox^ isColorOfText;
public: System::Windows::Forms::ListView^ allDoingsList;
private:
private: System::Windows::Forms::ColumnHeader^ columnHeader3;
public:
private: System::Windows::Forms::ColumnHeader^ columnHeader4;



































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(addNewDoing::typeid));
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->moverByFirstGroupBox = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->allElementsRight = (gcnew System::Windows::Forms::GroupBox());
			this->isBackColor = (gcnew System::Windows::Forms::CheckBox());
			this->isColorOfText = (gcnew System::Windows::Forms::CheckBox());
			this->colorOfBackColorDoing = (gcnew DevComponents::DotNetBar::ColorPickerButton());
			this->isDeadline = (gcnew System::Windows::Forms::CheckBox());
			this->colorOfBackColorDoingLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->minimizeWindowButton = (gcnew System::Windows::Forms::PictureBox());
			this->necessarilyItemLabel = (gcnew System::Windows::Forms::Label());
			this->topPanel = (gcnew System::Windows::Forms::Panel());
			this->titleOfWindow = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->line3 = (gcnew DevComponents::DotNetBar::Controls::Line());
			this->line1 = (gcnew DevComponents::DotNetBar::Controls::Line());
			this->closeWindow = (gcnew System::Windows::Forms::PictureBox());
			this->colorOfTextDoingLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->expandWindowButton = (gcnew System::Windows::Forms::PictureBox());
			this->deadlineLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->descriptionOfDoingTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->nameOfDoingTextBox = (gcnew DevComponents::DotNetBar::Controls::TextBoxX());
			this->descriptionLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->colorOfTextDoing = (gcnew DevComponents::DotNetBar::ColorPickerButton());
			this->choiceOfLevelOfDoingImportance = (gcnew System::Windows::Forms::ComboBox());
			this->importanceOfDoingLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->addDoingButton = (gcnew System::Windows::Forms::Button());
			this->choiceOfDeadline = (gcnew System::Windows::Forms::DateTimePicker());
			this->nameOfDoingLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->colorPickerDropDown3 = (gcnew DevComponents::DotNetBar::ColorPickerDropDown());
			this->moverByText = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->moverByTopPanel = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->moverBySecondGroupBox = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->allElementsLeft = (gcnew System::Windows::Forms::GroupBox());
			this->allDoingsList = (gcnew System::Windows::Forms::ListView());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->listOfAllDoingsLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->styleManager1 = (gcnew DevComponents::DotNetBar::StyleManager(this->components));
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->buttonItem1 = (gcnew DevComponents::DotNetBar::ButtonItem());
			this->buttonItem2 = (gcnew DevComponents::DotNetBar::ButtonItem());
			this->itemContainer1 = (gcnew DevComponents::DotNetBar::ItemContainer());
			this->galleryContainer1 = (gcnew DevComponents::DotNetBar::GalleryContainer());
			this->comboBoxItem1 = (gcnew DevComponents::DotNetBar::ComboBoxItem());
			this->labelItem1 = (gcnew DevComponents::DotNetBar::LabelItem());
			this->checkBoxItem1 = (gcnew DevComponents::DotNetBar::CheckBoxItem());
			this->checkBoxItem2 = (gcnew DevComponents::DotNetBar::CheckBoxItem());
			this->sliderItem1 = (gcnew DevComponents::DotNetBar::SliderItem());
			this->colorPickerDropDown1 = (gcnew DevComponents::DotNetBar::ColorPickerDropDown());
			this->colorPickerDropDown2 = (gcnew DevComponents::DotNetBar::ColorPickerDropDown());
			this->allElementsRight->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimizeWindowButton))->BeginInit();
			this->topPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closeWindow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->expandWindowButton))->BeginInit();
			this->allElementsLeft->SuspendLayout();
			this->SuspendLayout();
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 5;
			this->bunifuElipse1->TargetControl = this;
			// 
			// moverByFirstGroupBox
			// 
			this->moverByFirstGroupBox->Fixed = true;
			this->moverByFirstGroupBox->Horizontal = true;
			this->moverByFirstGroupBox->TargetControl = this->allElementsRight;
			this->moverByFirstGroupBox->Vertical = true;
			// 
			// allElementsRight
			// 
			this->allElementsRight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->allElementsRight->Controls->Add(this->isBackColor);
			this->allElementsRight->Controls->Add(this->isColorOfText);
			this->allElementsRight->Controls->Add(this->colorOfBackColorDoing);
			this->allElementsRight->Controls->Add(this->isDeadline);
			this->allElementsRight->Controls->Add(this->colorOfBackColorDoingLabel);
			this->allElementsRight->Controls->Add(this->minimizeWindowButton);
			this->allElementsRight->Controls->Add(this->necessarilyItemLabel);
			this->allElementsRight->Controls->Add(this->topPanel);
			this->allElementsRight->Controls->Add(this->colorOfTextDoingLabel);
			this->allElementsRight->Controls->Add(this->expandWindowButton);
			this->allElementsRight->Controls->Add(this->deadlineLabel);
			this->allElementsRight->Controls->Add(this->descriptionOfDoingTextBox);
			this->allElementsRight->Controls->Add(this->nameOfDoingTextBox);
			this->allElementsRight->Controls->Add(this->descriptionLabel);
			this->allElementsRight->Controls->Add(this->colorOfTextDoing);
			this->allElementsRight->Controls->Add(this->choiceOfLevelOfDoingImportance);
			this->allElementsRight->Controls->Add(this->importanceOfDoingLabel);
			this->allElementsRight->Controls->Add(this->addDoingButton);
			this->allElementsRight->Controls->Add(this->choiceOfDeadline);
			this->allElementsRight->Controls->Add(this->nameOfDoingLabel);
			this->allElementsRight->Location = System::Drawing::Point(322, 0);
			this->allElementsRight->Name = L"allElementsRight";
			this->allElementsRight->Size = System::Drawing::Size(343, 539);
			this->allElementsRight->TabIndex = 29;
			this->allElementsRight->TabStop = false;
			// 
			// isBackColor
			// 
			this->isBackColor->AutoSize = true;
			this->isBackColor->Location = System::Drawing::Point(274, 443);
			this->isBackColor->Name = L"isBackColor";
			this->isBackColor->Size = System::Drawing::Size(15, 14);
			this->isBackColor->TabIndex = 36;
			this->isBackColor->UseVisualStyleBackColor = true;
			this->isBackColor->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &addNewDoing::isBackColor_MouseClick);
			// 
			// isColorOfText
			// 
			this->isColorOfText->AutoSize = true;
			this->isColorOfText->Location = System::Drawing::Point(113, 443);
			this->isColorOfText->Name = L"isColorOfText";
			this->isColorOfText->Size = System::Drawing::Size(15, 14);
			this->isColorOfText->TabIndex = 35;
			this->isColorOfText->UseVisualStyleBackColor = true;
			this->isColorOfText->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &addNewDoing::isColorOfText_MouseClick);
			// 
			// colorOfBackColorDoing
			// 
			this->colorOfBackColorDoing->AccessibleRole = System::Windows::Forms::AccessibleRole::PushButton;
			this->colorOfBackColorDoing->AllowDrop = true;
			this->colorOfBackColorDoing->ColorTable = DevComponents::DotNetBar::eButtonColor::BlueOrb;
			this->colorOfBackColorDoing->Cursor = System::Windows::Forms::Cursors::Hand;
			this->colorOfBackColorDoing->Location = System::Drawing::Point(295, 437);
			this->colorOfBackColorDoing->Name = L"colorOfBackColorDoing";
			this->colorOfBackColorDoing->SelectedColorImageRectangle = System::Drawing::Rectangle(2, 2, 12, 12);
			this->colorOfBackColorDoing->Shape = (gcnew DevComponents::DotNetBar::RoundRectangleShapeDescriptor(2));
			this->colorOfBackColorDoing->Size = System::Drawing::Size(37, 23);
			this->colorOfBackColorDoing->Style = DevComponents::DotNetBar::eDotNetBarStyle::StyleManagerControlled;
			this->colorOfBackColorDoing->Symbol = L"";
			this->colorOfBackColorDoing->SymbolColor = System::Drawing::Color::White;
			this->colorOfBackColorDoing->SymbolSize = 14;
			this->colorOfBackColorDoing->TabIndex = 34;
			this->colorOfBackColorDoing->Visible = false;
			this->colorOfBackColorDoing->SelectedColorChanged += gcnew System::EventHandler(this, &addNewDoing::colorOfBackColorDoing_SelectedColorChanged);
			// 
			// isDeadline
			// 
			this->isDeadline->AutoSize = true;
			this->isDeadline->Location = System::Drawing::Point(97, 137);
			this->isDeadline->Name = L"isDeadline";
			this->isDeadline->Size = System::Drawing::Size(15, 14);
			this->isDeadline->TabIndex = 33;
			this->isDeadline->UseVisualStyleBackColor = true;
			this->isDeadline->CheckedChanged += gcnew System::EventHandler(this, &addNewDoing::isDeadline_CheckedChanged);
			// 
			// colorOfBackColorDoingLabel
			// 
			this->colorOfBackColorDoingLabel->AutoSize = true;
			this->colorOfBackColorDoingLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->colorOfBackColorDoingLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->colorOfBackColorDoingLabel->Location = System::Drawing::Point(182, 438);
			this->colorOfBackColorDoingLabel->Name = L"colorOfBackColorDoingLabel";
			this->colorOfBackColorDoingLabel->Size = System::Drawing::Size(92, 20);
			this->colorOfBackColorDoingLabel->TabIndex = 32;
			this->colorOfBackColorDoingLabel->Text = L"Цвет фона";
			// 
			// minimizeWindowButton
			// 
			this->minimizeWindowButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->minimizeWindowButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minimizeWindowButton.Image")));
			this->minimizeWindowButton->Location = System::Drawing::Point(5, 84);
			this->minimizeWindowButton->Name = L"minimizeWindowButton";
			this->minimizeWindowButton->Size = System::Drawing::Size(27, 15);
			this->minimizeWindowButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->minimizeWindowButton->TabIndex = 30;
			this->minimizeWindowButton->TabStop = false;
			this->minimizeWindowButton->Visible = false;
			this->minimizeWindowButton->Click += gcnew System::EventHandler(this, &addNewDoing::minimizeWindowButton_Click);
			// 
			// necessarilyItemLabel
			// 
			this->necessarilyItemLabel->AutoSize = true;
			this->necessarilyItemLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->necessarilyItemLabel->Location = System::Drawing::Point(24, 505);
			this->necessarilyItemLabel->Name = L"necessarilyItemLabel";
			this->necessarilyItemLabel->Size = System::Drawing::Size(124, 13);
			this->necessarilyItemLabel->TabIndex = 29;
			this->necessarilyItemLabel->Text = L"* - обязательный пункт";
			// 
			// topPanel
			// 
			this->topPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->topPanel->Controls->Add(this->titleOfWindow);
			this->topPanel->Controls->Add(this->line3);
			this->topPanel->Controls->Add(this->line1);
			this->topPanel->Controls->Add(this->closeWindow);
			this->topPanel->Location = System::Drawing::Point(0, 19);
			this->topPanel->Name = L"topPanel";
			this->topPanel->Size = System::Drawing::Size(343, 56);
			this->topPanel->TabIndex = 8;
			// 
			// titleOfWindow
			// 
			this->titleOfWindow->AutoSize = true;
			this->titleOfWindow->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->titleOfWindow->ForeColor = System::Drawing::SystemColors::Control;
			this->titleOfWindow->Location = System::Drawing::Point(10, 18);
			this->titleOfWindow->Name = L"titleOfWindow";
			this->titleOfWindow->Size = System::Drawing::Size(188, 20);
			this->titleOfWindow->TabIndex = 11;
			this->titleOfWindow->Text = L"Создание новой задачи";
			// 
			// line3
			// 
			this->line3->BackColor = System::Drawing::Color::AliceBlue;
			this->line3->EndLineCapSize = System::Drawing::Size(10, 10);
			this->line3->Location = System::Drawing::Point(-6, 48);
			this->line3->Name = L"line3";
			this->line3->Size = System::Drawing::Size(353, 20);
			this->line3->TabIndex = 10;
			this->line3->Text = L"line3";
			this->line3->Thickness = 5;
			// 
			// line1
			// 
			this->line1->BackColor = System::Drawing::Color::AliceBlue;
			this->line1->EndLineCapSize = System::Drawing::Size(10, 10);
			this->line1->Location = System::Drawing::Point(-6, -11);
			this->line1->Name = L"line1";
			this->line1->Size = System::Drawing::Size(353, 17);
			this->line1->TabIndex = 9;
			this->line1->Text = L"line1";
			this->line1->Thickness = 5;
			// 
			// closeWindow
			// 
			this->closeWindow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->closeWindow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->closeWindow->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closeWindow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeWindow.Image")));
			this->closeWindow->Location = System::Drawing::Point(306, 12);
			this->closeWindow->Name = L"closeWindow";
			this->closeWindow->Size = System::Drawing::Size(24, 30);
			this->closeWindow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->closeWindow->TabIndex = 9;
			this->closeWindow->TabStop = false;
			this->closeWindow->Click += gcnew System::EventHandler(this, &addNewDoing::closeWindow_Click);
			// 
			// colorOfTextDoingLabel
			// 
			this->colorOfTextDoingLabel->AutoSize = true;
			this->colorOfTextDoingLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->colorOfTextDoingLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->colorOfTextDoingLabel->Location = System::Drawing::Point(16, 438);
			this->colorOfTextDoingLabel->Name = L"colorOfTextDoingLabel";
			this->colorOfTextDoingLabel->Size = System::Drawing::Size(97, 20);
			this->colorOfTextDoingLabel->TabIndex = 25;
			this->colorOfTextDoingLabel->Text = L"Цвет текста";
			// 
			// expandWindowButton
			// 
			this->expandWindowButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->expandWindowButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"expandWindowButton.Image")));
			this->expandWindowButton->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"expandWindowButton.InitialImage")));
			this->expandWindowButton->Location = System::Drawing::Point(5, 84);
			this->expandWindowButton->Name = L"expandWindowButton";
			this->expandWindowButton->Size = System::Drawing::Size(27, 15);
			this->expandWindowButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->expandWindowButton->TabIndex = 28;
			this->expandWindowButton->TabStop = false;
			this->expandWindowButton->Click += gcnew System::EventHandler(this, &addNewDoing::expandWindowButton_Click);
			// 
			// deadlineLabel
			// 
			this->deadlineLabel->AutoSize = true;
			this->deadlineLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->deadlineLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->deadlineLabel->Location = System::Drawing::Point(16, 132);
			this->deadlineLabel->Name = L"deadlineLabel";
			this->deadlineLabel->Size = System::Drawing::Size(75, 20);
			this->deadlineLabel->TabIndex = 14;
			this->deadlineLabel->Text = L"Дедлайн";
			// 
			// descriptionOfDoingTextBox
			// 
			this->descriptionOfDoingTextBox->AccessibleDescription = L"";
			this->descriptionOfDoingTextBox->AutoWordSelection = true;
			this->descriptionOfDoingTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->descriptionOfDoingTextBox->Location = System::Drawing::Point(17, 197);
			this->descriptionOfDoingTextBox->Name = L"descriptionOfDoingTextBox";
			this->descriptionOfDoingTextBox->Size = System::Drawing::Size(312, 227);
			this->descriptionOfDoingTextBox->TabIndex = 22;
			this->descriptionOfDoingTextBox->Text = L"Здесь вы можете подробно описать свою задачу.";
			this->descriptionOfDoingTextBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &addNewDoing::descriptionOfDoingTextBox_MouseClick);
			// 
			// nameOfDoingTextBox
			// 
			this->nameOfDoingTextBox->BackColor = System::Drawing::Color::White;
			// 
			// 
			// 
			this->nameOfDoingTextBox->Border->Class = L"TextBoxBorder";
			this->nameOfDoingTextBox->Border->CornerType = DevComponents::DotNetBar::eCornerType::Square;
			this->nameOfDoingTextBox->DisabledBackColor = System::Drawing::Color::White;
			this->nameOfDoingTextBox->ForeColor = System::Drawing::Color::Black;
			this->nameOfDoingTextBox->Location = System::Drawing::Point(102, 106);
			this->nameOfDoingTextBox->Name = L"nameOfDoingTextBox";
			this->nameOfDoingTextBox->PreventEnterBeep = true;
			this->nameOfDoingTextBox->Size = System::Drawing::Size(228, 20);
			this->nameOfDoingTextBox->TabIndex = 13;
			this->nameOfDoingTextBox->WatermarkFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			// 
			// descriptionLabel
			// 
			this->descriptionLabel->AutoSize = true;
			this->descriptionLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->descriptionLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->descriptionLabel->Location = System::Drawing::Point(130, 170);
			this->descriptionLabel->Name = L"descriptionLabel";
			this->descriptionLabel->Size = System::Drawing::Size(88, 20);
			this->descriptionLabel->TabIndex = 21;
			this->descriptionLabel->Text = L"Описание";
			// 
			// colorOfTextDoing
			// 
			this->colorOfTextDoing->AccessibleRole = System::Windows::Forms::AccessibleRole::PushButton;
			this->colorOfTextDoing->AllowDrop = true;
			this->colorOfTextDoing->ColorTable = DevComponents::DotNetBar::eButtonColor::BlueOrb;
			this->colorOfTextDoing->Cursor = System::Windows::Forms::Cursors::Hand;
			this->colorOfTextDoing->Location = System::Drawing::Point(134, 437);
			this->colorOfTextDoing->Name = L"colorOfTextDoing";
			this->colorOfTextDoing->SelectedColorImageRectangle = System::Drawing::Rectangle(2, 2, 12, 12);
			this->colorOfTextDoing->Shape = (gcnew DevComponents::DotNetBar::RoundRectangleShapeDescriptor(2));
			this->colorOfTextDoing->Size = System::Drawing::Size(37, 23);
			this->colorOfTextDoing->Style = DevComponents::DotNetBar::eDotNetBarStyle::StyleManagerControlled;
			this->colorOfTextDoing->Symbol = L"";
			this->colorOfTextDoing->SymbolColor = System::Drawing::Color::White;
			this->colorOfTextDoing->SymbolSize = 14;
			this->colorOfTextDoing->TabIndex = 24;
			this->colorOfTextDoing->Visible = false;
			this->colorOfTextDoing->SelectedColorChanged += gcnew System::EventHandler(this, &addNewDoing::colorOfTextDoing_SelectedColorChanged);
			// 
			// choiceOfLevelOfDoingImportance
			// 
			this->choiceOfLevelOfDoingImportance->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->choiceOfLevelOfDoingImportance->FormattingEnabled = true;
			this->choiceOfLevelOfDoingImportance->Location = System::Drawing::Point(158, 466);
			this->choiceOfLevelOfDoingImportance->Name = L"choiceOfLevelOfDoingImportance";
			this->choiceOfLevelOfDoingImportance->Size = System::Drawing::Size(121, 21);
			this->choiceOfLevelOfDoingImportance->TabIndex = 27;
			this->choiceOfLevelOfDoingImportance->TabStop = false;
			// 
			// importanceOfDoingLabel
			// 
			this->importanceOfDoingLabel->AutoSize = true;
			this->importanceOfDoingLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->importanceOfDoingLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->importanceOfDoingLabel->Location = System::Drawing::Point(16, 466);
			this->importanceOfDoingLabel->Name = L"importanceOfDoingLabel";
			this->importanceOfDoingLabel->Size = System::Drawing::Size(142, 20);
			this->importanceOfDoingLabel->TabIndex = 26;
			this->importanceOfDoingLabel->Text = L"Важность задачи*";
			// 
			// addDoingButton
			// 
			this->addDoingButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addDoingButton->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->addDoingButton->Location = System::Drawing::Point(255, 505);
			this->addDoingButton->Name = L"addDoingButton";
			this->addDoingButton->Size = System::Drawing::Size(74, 30);
			this->addDoingButton->TabIndex = 23;
			this->addDoingButton->Text = L"Создать";
			this->addDoingButton->UseVisualStyleBackColor = true;
			this->addDoingButton->Click += gcnew System::EventHandler(this, &addNewDoing::addDoingButton_Click);
			// 
			// choiceOfDeadline
			// 
			this->choiceOfDeadline->Location = System::Drawing::Point(119, 132);
			this->choiceOfDeadline->Name = L"choiceOfDeadline";
			this->choiceOfDeadline->Size = System::Drawing::Size(211, 20);
			this->choiceOfDeadline->TabIndex = 16;
			this->choiceOfDeadline->Visible = false;
			// 
			// nameOfDoingLabel
			// 
			this->nameOfDoingLabel->AutoSize = true;
			this->nameOfDoingLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameOfDoingLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->nameOfDoingLabel->Location = System::Drawing::Point(16, 106);
			this->nameOfDoingLabel->Name = L"nameOfDoingLabel";
			this->nameOfDoingLabel->Size = System::Drawing::Size(86, 20);
			this->nameOfDoingLabel->TabIndex = 12;
			this->nameOfDoingLabel->Text = L"Название*";
			// 
			// colorPickerDropDown3
			// 
			this->colorPickerDropDown3->GlobalItem = false;
			this->colorPickerDropDown3->Name = L"colorPickerDropDown3";
			this->colorPickerDropDown3->Text = L"colorPickerDropDown3";
			// 
			// moverByText
			// 
			this->moverByText->Fixed = true;
			this->moverByText->Horizontal = true;
			this->moverByText->TargetControl = this->titleOfWindow;
			this->moverByText->Vertical = true;
			// 
			// moverByTopPanel
			// 
			this->moverByTopPanel->Fixed = true;
			this->moverByTopPanel->Horizontal = true;
			this->moverByTopPanel->TargetControl = this->topPanel;
			this->moverByTopPanel->Vertical = true;
			// 
			// moverBySecondGroupBox
			// 
			this->moverBySecondGroupBox->Fixed = true;
			this->moverBySecondGroupBox->Horizontal = true;
			this->moverBySecondGroupBox->TargetControl = this->allElementsLeft;
			this->moverBySecondGroupBox->Vertical = true;
			// 
			// allElementsLeft
			// 
			this->allElementsLeft->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->allElementsLeft->Controls->Add(this->allDoingsList);
			this->allElementsLeft->Controls->Add(this->listOfAllDoingsLabel);
			this->allElementsLeft->Location = System::Drawing::Point(12, 12);
			this->allElementsLeft->Name = L"allElementsLeft";
			this->allElementsLeft->Size = System::Drawing::Size(298, 506);
			this->allElementsLeft->TabIndex = 30;
			this->allElementsLeft->TabStop = false;
			this->allElementsLeft->Visible = false;
			// 
			// allDoingsList
			// 
			this->allDoingsList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->allDoingsList->BackColor = System::Drawing::SystemColors::HotTrack;
			this->allDoingsList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->columnHeader3,
					this->columnHeader4
			});
			this->allDoingsList->ForeColor = System::Drawing::SystemColors::Control;
			this->allDoingsList->FullRowSelect = true;
			this->allDoingsList->HideSelection = false;
			this->allDoingsList->LabelEdit = true;
			this->allDoingsList->Location = System::Drawing::Point(6, 41);
			this->allDoingsList->MultiSelect = false;
			this->allDoingsList->Name = L"allDoingsList";
			this->allDoingsList->Size = System::Drawing::Size(286, 459);
			this->allDoingsList->TabIndex = 37;
			this->allDoingsList->TabStop = false;
			this->allDoingsList->UseCompatibleStateImageBehavior = false;
			this->allDoingsList->View = System::Windows::Forms::View::Tile;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Название задачи";
			this->columnHeader3->Width = 125;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Описание";
			this->columnHeader4->Width = 141;
			// 
			// listOfAllDoingsLabel
			// 
			this->listOfAllDoingsLabel->AutoSize = true;
			this->listOfAllDoingsLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listOfAllDoingsLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->listOfAllDoingsLabel->Location = System::Drawing::Point(75, 18);
			this->listOfAllDoingsLabel->Name = L"listOfAllDoingsLabel";
			this->listOfAllDoingsLabel->Size = System::Drawing::Size(151, 20);
			this->listOfAllDoingsLabel->TabIndex = 12;
			this->listOfAllDoingsLabel->Text = L"Список всех задач";
			// 
			// styleManager1
			// 
			this->styleManager1->ManagerStyle = DevComponents::DotNetBar::eStyle::Metro;
			this->styleManager1->MetroColorParameters = DevComponents::DotNetBar::Metro::ColorTables::MetroColorGeneratorParameters(System::Drawing::Color::White,
				System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
					static_cast<System::Int32>(static_cast<System::Byte>(154))));
			// 
			// buttonItem1
			// 
			this->buttonItem1->GlobalItem = false;
			this->buttonItem1->Name = L"buttonItem1";
			this->buttonItem1->Text = L"buttonItem1";
			// 
			// buttonItem2
			// 
			this->buttonItem2->GlobalItem = false;
			this->buttonItem2->Name = L"buttonItem2";
			this->buttonItem2->Text = L"buttonItem2";
			// 
			// itemContainer1
			// 
			// 
			// 
			// 
			this->itemContainer1->BackgroundStyle->CornerType = DevComponents::DotNetBar::eCornerType::Square;
			this->itemContainer1->Name = L"itemContainer1";
			// 
			// 
			// 
			this->itemContainer1->TitleMouseOverStyle->CornerType = DevComponents::DotNetBar::eCornerType::Square;
			// 
			// 
			// 
			this->itemContainer1->TitleStyle->CornerType = DevComponents::DotNetBar::eCornerType::Square;
			// 
			// galleryContainer1
			// 
			// 
			// 
			// 
			this->galleryContainer1->BackgroundStyle->CornerType = DevComponents::DotNetBar::eCornerType::Square;
			this->galleryContainer1->GlobalItem = false;
			this->galleryContainer1->MinimumSize = System::Drawing::Size(58, 58);
			this->galleryContainer1->Name = L"galleryContainer1";
			// 
			// 
			// 
			this->galleryContainer1->TitleMouseOverStyle->CornerType = DevComponents::DotNetBar::eCornerType::Square;
			// 
			// 
			// 
			this->galleryContainer1->TitleStyle->CornerType = DevComponents::DotNetBar::eCornerType::Square;
			// 
			// comboBoxItem1
			// 
			this->comboBoxItem1->DropDownHeight = 106;
			this->comboBoxItem1->GlobalItem = false;
			this->comboBoxItem1->Name = L"comboBoxItem1";
			// 
			// labelItem1
			// 
			this->labelItem1->GlobalItem = false;
			this->labelItem1->Name = L"labelItem1";
			this->labelItem1->Text = L"labelItem1";
			// 
			// checkBoxItem1
			// 
			this->checkBoxItem1->GlobalItem = false;
			this->checkBoxItem1->Name = L"checkBoxItem1";
			this->checkBoxItem1->Text = L"checkBoxItem1";
			// 
			// checkBoxItem2
			// 
			this->checkBoxItem2->GlobalItem = false;
			this->checkBoxItem2->Name = L"checkBoxItem2";
			this->checkBoxItem2->Text = L"checkBoxItem2";
			// 
			// sliderItem1
			// 
			this->sliderItem1->GlobalItem = false;
			this->sliderItem1->Name = L"sliderItem1";
			this->sliderItem1->Text = L"sliderItem1";
			this->sliderItem1->Value = 0;
			// 
			// colorPickerDropDown1
			// 
			this->colorPickerDropDown1->GlobalItem = false;
			this->colorPickerDropDown1->Name = L"colorPickerDropDown1";
			this->colorPickerDropDown1->Text = L"colorPickerDropDown1";
			// 
			// colorPickerDropDown2
			// 
			this->colorPickerDropDown2->GlobalItem = false;
			this->colorPickerDropDown2->Name = L"colorPickerDropDown2";
			this->colorPickerDropDown2->Text = L"colorPickerDropDown2";
			// 
			// addNewDoing
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->ClientSize = System::Drawing::Size(677, 529);
			this->Controls->Add(this->allElementsLeft);
			this->Controls->Add(this->allElementsRight);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"addNewDoing";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"addNewDoing";
			this->Load += gcnew System::EventHandler(this, &addNewDoing::addNewDoing_Load);
			this->allElementsRight->ResumeLayout(false);
			this->allElementsRight->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimizeWindowButton))->EndInit();
			this->topPanel->ResumeLayout(false);
			this->topPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closeWindow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->expandWindowButton))->EndInit();
			this->allElementsLeft->ResumeLayout(false);
			this->allElementsLeft->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void addNewDoing_Load(System::Object^ sender, System::EventArgs^ e)
	{
		addNewDoing::Width = 344;
		addNewDoing::Height = 550;
		allElementsRight->Dock = DockStyle::Left;
		choiceOfLevelOfDoingImportance->Items->AddRange(gcnew cli::array<System::Object^>(3) { L"Низкая", L"Средняя", L"Высокая" });
		ToolTip^ toolTipForCloseWindow = gcnew ToolTip();
		toolTipForCloseWindow->SetToolTip(closeWindow, "Закрыть");

		if (System::IO::File::Exists(path))
		{
			System::IO::BinaryReader^ reader;
			try
			{
				reader = gcnew System::IO::BinaryReader(System::IO::File::Open(path, System::IO::FileMode::Open));
				while (reader->PeekChar() > -1)
				{
					String^ countOfDoings = reader->ReadString();
					String^ countOfGroup = reader->ReadString();

					for (int i = 0; i < Convert::ToInt32(countOfDoings); i++)
					{
						allDoingsList->Items->Add(reader->ReadString());
					}

					int counterOfUnsuccessfulAttempts = 0;
					int currentGroup = 0;

					for (int i = 0; i < Convert::ToInt32(countOfDoings); )
					{
						ListViewGroup^ group = gcnew ListViewGroup();
						group->Header = reader->ReadString();
						if (group->Header == "")
						{
							group->HeaderAlignment = HorizontalAlignment::Left;
						}
						else
						{
							group->HeaderAlignment = HorizontalAlignment::Center;
						}
						if (allDoingsList->Groups->Count >= 1)
						{
							for (int j = 0; j < allDoingsList->Groups->Count; )
							{
								if (allDoingsList->Groups[j]->Header == group->Header)
								{
									allDoingsList->Items[i]->Group = allDoingsList->Groups[j];
									i++;
									j = allDoingsList->Groups->Count;
								}
								else if (allDoingsList->Groups[j]->Header != group->Header)
								{
									j++;
									counterOfUnsuccessfulAttempts++;
								}
							}
							if (counterOfUnsuccessfulAttempts == allDoingsList->Groups->Count)
							{
								allDoingsList->Groups->Add(group);
								currentGroup = allDoingsList->Groups->Count - 1;
								allDoingsList->Items[i]->Group = allDoingsList->Groups[currentGroup];
								i++;
							}
						}
						else
						{
							allDoingsList->Groups->Add(group);
							allDoingsList->Items[0]->Group = allDoingsList->Groups[0];
							i++;
						}
					}
				}
			}
			catch (System::Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
			finally
			{
				reader->Close();
			}
		}
	}
	private: System::Void closeWindow_Click(System::Object^ sender, System::EventArgs^ e)
	{
		addNewDoing::Close();
	}
private: System::Void expandWindowButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (addNewDoing::Width == 344)
	{
		addNewDoing::Width = 677;
		allElementsRight->Dock = DockStyle::Right;
		allElementsLeft->Visible = true;
		allElementsLeft->Dock = DockStyle::Left;
		minimizeWindowButton->Visible = true;
	}
	else
	{
		minimizeWindowButton_Click(sender, System::EventArgs::Empty);
	}
}
private: System::Void minimizeWindowButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	addNewDoing::Width = 344;
	addNewDoing::Height = 550;
	allElementsRight->Dock = DockStyle::Left;
	allElementsLeft->Visible = false;
	minimizeWindowButton->Visible = false;
}
private: System::Void addDoingButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	//очищаем текстовые файлы от прежней информации
	System::IO::File::WriteAllText("data.txt", String::Empty);
	System::IO::File::WriteAllText("description.txt", String::Empty);
	//проверка на обязательное заполнение поля с названием
	if (!String::IsNullOrWhiteSpace(nameOfDoingTextBox->Text)) //если поле не пустое
	{
		//заносим в первую строчку документа название
		System::IO::File::AppendAllText("data.txt", nameOfDoingTextBox->Text + "\n");
	}
	else
	{
		//если же пустое, то сообщаем об этом пользователю
		MessageBox::Show(this, "Поле 'название' обязательное.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		System::IO::File::AppendAllText("data.txt", "error" + "\n");
	}

	//проверка на наличие дедлайна
	if (isDeadline->CheckState == CheckState::Checked)
	{
		DateTime^ now = gcnew DateTime();
		now = DateTime::Now;
		//проверка на корректность дедлайна
		if (choiceOfDeadline->Value < now->Date)
		{
			MessageBox::Show(this, "Вы не можете указывать прошедшие дни в качестве дедлайна.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			System::IO::File::AppendAllText("data.txt", "error" + "\n");
		}
		else
		{
			System::IO::File::AppendAllText("data.txt", choiceOfDeadline->Text + "\n");
		}
	}
	else if (isDeadline->CheckState == CheckState::Unchecked)
	{
		//иначе оставить вторую строчку пустой
		System::IO::File::AppendAllText("data.txt", "" + "\n");
	}

	//проверка на наличие описания задачи
	if (descriptionOfDoingTextBox->Text != "Здесь вы можете подробно описать свою задачу." && descriptionOfDoingTextBox->Text != "")
	{
		//если текст описания не равен тексту по умолчанию и не равен пустоте, то добавить описание на третью строчку текстового документа
		//StreamReader sr = new StreamReader
		System::IO::File::AppendAllText("description.txt", descriptionOfDoingTextBox->Text + "\n");
	}
	else
	{
		//иначе оставить вторую строчку пустой
		System::IO::File::AppendAllText("description.txt", "" + "\n");
	}

	if (isColorOfText->CheckState == CheckState::Checked)
	{
		System::IO::File::AppendAllText("data.txt", colorOfTextDoing->SymbolColor + "\n");
	}
	else
	{
		System::IO::File::AppendAllText("data.txt", "" + "\n");
	}
	if (isBackColor->CheckState == CheckState::Checked)
	{
		System::IO::File::AppendAllText("data.txt", colorOfTextDoing->SymbolColor + "\n");
	}
	else
	{
		System::IO::File::AppendAllText("data.txt", "" + "\n");
	}

	//закрыть окно
	addNewDoing::Close();
}
private: System::Void isDeadline_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	choiceOfDeadline->Visible = true;
	if (isDeadline->CheckState == CheckState::Unchecked)
	{
		choiceOfDeadline->Visible = false;
	}
}
private: System::Void descriptionOfDoingTextBox_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (descriptionOfDoingTextBox->Text == "Здесь вы можете подробно описать свою задачу.")
	{
		descriptionOfDoingTextBox->Clear();
		descriptionOfDoingTextBox->ForeColor = Color::Black;
	}
}
private: System::Void colorOfTextDoing_SelectedColorChanged(System::Object^ sender, System::EventArgs^ e)
{
	colorOfTextDoing->SymbolColor = colorOfTextDoing->SelectedColor;
}
private: System::Void colorOfBackColorDoing_SelectedColorChanged(System::Object^ sender, System::EventArgs^ e)
{
	colorOfBackColorDoing->SymbolColor = colorOfBackColorDoing->SelectedColor;
}
private: System::Void isColorOfText_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	colorOfTextDoing->Visible = true;
	if (isColorOfText->CheckState == CheckState::Unchecked)
	{
		colorOfTextDoing->Visible = false;
	}
}
private: System::Void isBackColor_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	colorOfBackColorDoing->Visible = true;
	if (isBackColor->CheckState == CheckState::Unchecked)
	{
		colorOfBackColorDoing->Visible = false;
	}
}
};
}
