#pragma once
#include "addNewDoing.h"
#include "formSettings.h"
#include "refForm.h"
#include "aboutMeForm.h"

namespace leaderplan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			moveSidePanel(boardButton);
			boardButton->Normalcolor = Color::FromArgb(14, 51, 119);
			saveFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
		}

		System::Windows::Forms::ListView^ doingsList;
		System::Windows::Forms::ListView^ doingsTodayList;

		String^ path = "E:\\leaderplan\\Release\\Data\\AllDoingsList.dat";
		String^ path_2 = "E:\\leaderplan\\Release\\Data\\TodayDoingsList.dat";
		String^ path_3 = "E:\\leaderplan\\Release\\Data\\DoneList.dat";
		
	private:
		System::Windows::Forms::ToolStripMenuItem^ сделаноToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ списокВсехДелToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ сделатьСегодняToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ темыToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ сохранитьБезДедлайнаToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ списокВсехДелToolStripMenuItem1;
		System::Windows::Forms::ToolStripMenuItem^ сделатьСегодняToolStripMenuItem1;
		System::Windows::Forms::ToolStripMenuItem^ восстановитToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ навигацияToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ доскаСписковДелToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ списокЦелейToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ проектыToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ календарьToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ статистикаToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ подведениеИтоговToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ калорииИВесToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ заметкиToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ напоминанияToolStripMenuItem;
		System::Windows::Forms::OpenFileDialog^ openFileDialog1;
		System::Windows::Forms::PictureBox^ searchIcon;
		System::Windows::Forms::PictureBox^ leaderplan;
		System::Windows::Forms::PictureBox^ leaderplanIcon;
		System::Windows::Forms::PictureBox^ closeProgram;
		System::Windows::Forms::PictureBox^ minimizeWindow;
		System::Windows::Forms::PictureBox^ hideProgram;
		System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Panel^ panel3;
		System::Windows::Forms::Panel^ panel5;
		System::Windows::Forms::Panel^ topPanel;
		System::Windows::Forms::Panel^ leftPanel;
		System::Windows::Forms::Panel^ sidePanel;
		System::Windows::Forms::PictureBox^ threeDots;
		System::Windows::Forms::PictureBox^ donePictureBox;
		System::Windows::Forms::MenuStrip^ menuOptions;
		System::Windows::Forms::ToolStripMenuItem^ ФайлToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ разработчикToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ разработчикToolStripMenuItem1;
		System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ docxToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ txtToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
		System::Windows::Forms::GroupBox^ firstList;
		System::Windows::Forms::PictureBox^ maximizeWindow;
		System::Windows::Forms::PictureBox^ addNewDoingButton;
		System::Windows::Forms::GroupBox^ secondList;
		System::Windows::Forms::GroupBox^ thirdList;
		System::Windows::Forms::PictureBox^ sortingListButton;
		System::Windows::Forms::GroupBox^ sortingBox;
		System::Windows::Forms::RadioButton^ byUserChoice;
		System::Windows::Forms::RadioButton^ byImportance;
		System::Windows::Forms::PictureBox^ sortingListButton2;
		System::Windows::Forms::RadioButton^ byDefault;
		System::Windows::Forms::Panel^ panel2;
		System::Windows::Forms::Label^ listIsEmptyLabel;
		System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
		System::Windows::Forms::ToolStripMenuItem^ оРазработчикеToolStripMenuItem;
		System::Windows::Forms::PictureBox^ sortingForDoingsListButton;
		System::Windows::Forms::GroupBox^ sortingForDoingsListBox;
		System::Windows::Forms::RadioButton^ byDefaultDL;
		System::Windows::Forms::RadioButton^ byUserChoiceDL;
		System::Windows::Forms::RadioButton^ byImportanceDL;
		System::Windows::Forms::PictureBox^ sortingForDoingsListButton2;
		System::Windows::Forms::RadioButton^ byDatesChoice;
		System::Windows::Forms::PictureBox^ sortingListButton_2;
		System::Windows::Forms::ColumnHeader^ columnHeader1;
		System::Windows::Forms::ColumnHeader^ columnHeader2;
		System::Windows::Forms::Label^ currentDate;
		System::Windows::Forms::Label^ isAnythingTodayLabel;
		System::Windows::Forms::ColumnHeader^ columnHeader3;
		System::Windows::Forms::ColumnHeader^ columnHeader4;
		System::Windows::Forms::PictureBox^ toRight;
		System::Windows::Forms::PictureBox^ toLeft;
		System::Windows::Forms::PictureBox^ toDelete;
		System::Windows::Forms::PictureBox^ toDeleteInactive;
		System::Windows::Forms::Label^ amountOfDoingsLabel;
		System::Windows::Forms::Label^ amountOfDoings;
		System::Windows::Forms::PictureBox^ doneButton;
		System::Windows::Forms::GroupBox^ doneOptions;
		System::Windows::Forms::Button^ saveDoings;
		System::Windows::Forms::Button^ deleteAllDoings;
		System::Windows::Forms::PictureBox^ donePictureBox2;
		System::Windows::Forms::Label^ countOfDoingsToday;
		System::Windows::Forms::Label^ nextDoing;
		System::Windows::Forms::Label^ currentDoing;
		System::Windows::Forms::Panel^ panel6;
		System::Windows::Forms::RichTextBox^ doneList;
		System::Windows::Forms::Label^ isNothingLabel;
		System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
		System::ComponentModel::IContainer^ components;
		System::Windows::Forms::DialogResult result;
		Bunifu::Framework::UI::BunifuElipse^ bunifuElipse1;
		Bunifu::Framework::UI::BunifuCustomLabel^ allDoingsLabel;
		Bunifu::Framework::UI::BunifuCustomLabel^ nextTaskLabel;
		Bunifu::Framework::UI::BunifuCustomLabel^ currentDateLabel;
		Bunifu::Framework::UI::BunifuCustomLabel^ currentTaskLabel;
		Bunifu::Framework::UI::BunifuFlatButton^ remindersButton;
		Bunifu::Framework::UI::BunifuFlatButton^ notesButton;
		Bunifu::Framework::UI::BunifuFlatButton^ healthButton;
		Bunifu::Framework::UI::BunifuFlatButton^ resultsButton;
		Bunifu::Framework::UI::BunifuFlatButton^ statisticsButton;
		Bunifu::Framework::UI::BunifuFlatButton^ calendarButton;
		Bunifu::Framework::UI::BunifuFlatButton^ projectsButton;
		Bunifu::Framework::UI::BunifuFlatButton^ aimsButton;
		Bunifu::Framework::UI::BunifuFlatButton^ boardButton;
		Bunifu::Framework::UI::BunifuSeparator^ separator_3;
		Bunifu::Framework::UI::BunifuCustomLabel^ listOfAllDoingsLabel;
		Bunifu::Framework::UI::BunifuCustomLabel^ alreadyDoneLabel;
		Bunifu::Framework::UI::BunifuCustomLabel^ doTodayLabel;
		Bunifu::Framework::UI::BunifuDragControl^ moverTopPanel;
		Bunifu::Framework::UI::BunifuDragControl^ moverMenu;
		WindowsFormsControlLibrary1::BunifuCustomTextbox^ searchForDoings;

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

		System::Windows::Forms::ListViewItem^ selectedItem;
		System::Windows::Forms::ListViewItem^ selectedItemToday;

	private: System::Void closeProgram_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::IO::File::Delete(path);
		System::IO::File::Delete(path_2);
		System::IO::File::Delete(path_3);
		
		try
		{
			if (doingsList->Items->Count != 0)
			{
				int countOfAllDoings = doingsList->Items->Count;
				int groupsOfAllDoings = doingsList->Groups->Count;
				
				System::IO::BinaryWriter^ writer = gcnew System::IO::BinaryWriter(System::IO::File::Open(path, System::IO::FileMode::OpenOrCreate));
				writer->Write(Convert::ToString(countOfAllDoings));
				writer->Write(Convert::ToString(groupsOfAllDoings));

				for (int i = 0; i < doingsList->Items->Count; i++)
				{
					writer->Write(doingsList->Items[i]->Text);
				}
				
				for (int i = 0; i < doingsList->Items->Count; i++)
				{
					if (String::IsNullOrWhiteSpace(doingsList->Items[i]->Group->Header))
					{
						writer->Write("");
					}
					else
					{
						writer->Write(doingsList->Items[i]->Group->Header);
					}
				}
			}
		}
		catch (System::Exception^ e)
		{
			MessageBox::Show(e->Message);
		}

		try
		{
			if (doingsTodayList->Items->Count != 0)
			{
				int countOfDoingsToday = doingsTodayList->Items->Count;
				int groupsOfDoingsToday = doingsTodayList->Groups->Count;
				
				System::IO::BinaryWriter^ writer = gcnew System::IO::BinaryWriter(System::IO::File::Open(path_2, System::IO::FileMode::OpenOrCreate));
				writer->Write(Convert::ToString(countOfDoingsToday));
				writer->Write(Convert::ToString(groupsOfDoingsToday));
				writer->Write(Convert::ToString(currentDoing->Text));

				if (nextDoing->Text == "label1")
				{
					writer->Write("");
				}
				else
				{
					writer->Write(Convert::ToString(nextDoing->Text));
				}

				for (int i = 0; i < doingsTodayList->Items->Count; i++)
				{
					writer->Write(doingsTodayList->Items[i]->Text);
				}

				for (int i = 0; i < doingsTodayList->Items->Count; i++)
				{
					if (String::IsNullOrWhiteSpace(doingsTodayList->Items[i]->Group->Header))
					{
						writer->Write("");
					}
					else
					{
						writer->Write(doingsTodayList->Items[i]->Group->Header);
					}
				}
			}
		}
		catch (System::Exception^ e)
		{
			MessageBox::Show(e->Message);
		}

		try
		{
			if (doneList->Text != "")
			{
				System::IO::BinaryWriter^ writer = gcnew System::IO::BinaryWriter(System::IO::File::Open(path_3, System::IO::FileMode::OpenOrCreate));
				writer->Write(doneList->Text);
			}
		}
		catch (System::Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
		
		System::Environment::Exit(0);
	}

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		System::IO::BinaryReader^ reader;

		if (System::IO::File::Exists(path))
		{
			listIsEmptyLabel->Visible = false;

			try
			{
				reader = gcnew System::IO::BinaryReader(System::IO::File::Open(path, System::IO::FileMode::Open));
				
				while (reader->PeekChar() > -1)
				{
					amountOfDoings->Text = reader->ReadString();
					String^ countOfGroup = reader->ReadString();

					for (int i = 0; i < Convert::ToInt32(amountOfDoings->Text); i++)
					{
						doingsList->Items->Add(reader->ReadString());
					}

					int counterOfUnsuccessfulAttempts = 0;
					int currentGroup = 0;
					
					for (int i = 0; i < Convert::ToInt32(amountOfDoings->Text); )
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
						
						if (doingsList->Groups->Count >= 1)
						{
							for (int j = 0; j < doingsList->Groups->Count; )
							{
								if (doingsList->Groups[j]->Header == group->Header)
								{
									doingsList->Items[i]->Group = doingsList->Groups[j];
									i++;
									j = doingsList->Groups->Count;
								}
								else if (doingsList->Groups[j]->Header != group->Header)
								{
									j++;
									counterOfUnsuccessfulAttempts++;
								}
							}

							if (counterOfUnsuccessfulAttempts == doingsList->Groups->Count)
							{
								doingsList->Groups->Add(group);
								currentGroup = doingsList->Groups->Count - 1;
								doingsList->Items[i]->Group = doingsList->Groups[currentGroup];
								i++;
							}
						}
						else
						{
							doingsList->Groups->Add(group);
							doingsList->Items[0]->Group = doingsList->Groups[0];
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

		System::IO::BinaryReader^ reader2;

		if (System::IO::File::Exists(path_2))
		{
			isAnythingTodayLabel->Visible = false;

			try
			{
				reader2 = gcnew System::IO::BinaryReader(System::IO::File::Open(path_2, System::IO::FileMode::Open));
				
				while (reader2->PeekChar() > -1)
				{
					countOfDoingsToday->Text = reader2->ReadString();
					String^ countOfGroup = reader2->ReadString();

					currentDoing->Visible = true;
					nextDoing->Visible = true;
					currentDoing->Text = reader2->ReadString();
					nextDoing->Text = reader2->ReadString();

					for (int i = 0; i < Convert::ToInt32(countOfDoingsToday->Text); i++)
					{
						doingsTodayList->Items->Add(reader2->ReadString());
					}

					int counterOfUnsuccessfulAttempts = 0;
					int currentGroup = 0;

					for (int i = 0; i < Convert::ToInt32(countOfDoingsToday->Text); )
					{
						ListViewGroup^ group = gcnew ListViewGroup();
						group->Header = reader2->ReadString();

						if (group->Header == "")
						{
							group->HeaderAlignment = HorizontalAlignment::Left;
						}
						else
						{
							group->HeaderAlignment = HorizontalAlignment::Center;
						}

						if (doingsTodayList->Groups->Count >= 1)
						{
							for (int j = 0; j < doingsTodayList->Groups->Count; )
							{
								if (doingsTodayList->Groups[j]->Header == group->Header)
								{
									doingsTodayList->Items[i]->Group = doingsTodayList->Groups[j];
									i++;
									j = doingsTodayList->Groups->Count;
								}
								else if (doingsTodayList->Groups[j]->Header != group->Header)
								{
									j++;
									counterOfUnsuccessfulAttempts++;
								}
							}

							if (counterOfUnsuccessfulAttempts == doingsTodayList->Groups->Count)
							{
								doingsTodayList->Groups->Add(group);
								currentGroup = doingsTodayList->Groups->Count - 1;
								doingsTodayList->Items[i]->Group = doingsTodayList->Groups[currentGroup];
								i++;
							}
						}
						else
						{
							doingsTodayList->Groups->Add(group);
							doingsTodayList->Items[0]->Group = doingsTodayList->Groups[0];
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
				reader2->Close();
			}
		}

		System::IO::BinaryReader^ reader3;

		if (System::IO::File::Exists(path_3))
		{
			try
			{
				reader3 = gcnew System::IO::BinaryReader(System::IO::File::Open(path_3, System::IO::FileMode::Open));
				
				while (reader3->PeekChar() > -1)
				{
					isNothingLabel->Visible = false;
					doneList->Text = reader3->ReadString();
				}
			}
			catch (System::Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
			finally
			{
				reader3->Close();
			}
		}

		DateTime^ currentDateTime = gcnew DateTime();
		currentDateTime = DateTime::Now;
		currentDate->Text = "Дедлайн: ";
		currentDate->Text += currentDateTime->ToLongDateString();

		for (int i = 0; i < doingsList->Items->Count; i++)
		{
			if (doingsList->Items[i]->Group->Header == currentDate->Text)
			{
				MessageBox::Show(this, "Сегодня дедлайн!", doingsList->Items[i]->Text, MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}

		currentDate->Text = currentDateTime->ToLongDateString();

		ToolTip^ toolTipForAddNewDoing = gcnew ToolTip();
		toolTipForAddNewDoing->SetToolTip(addNewDoingButton, "Добавить новую задачу");
		ToolTip^ toolTipForSortingList = gcnew ToolTip();
		toolTipForSortingList->SetToolTip(sortingListButton, "Упорядочить задачи");
		ToolTip^ toolTipForSortingList2 = gcnew ToolTip();
		toolTipForSortingList2->SetToolTip(sortingForDoingsListButton, "Упорядочить задачи");
		ToolTip^ toolTipForThreeDots = gcnew ToolTip();
		toolTipForThreeDots->SetToolTip(threeDots, "Изменить отображение");
		ToolTip^ toolTipForHideProgram = gcnew ToolTip();
		toolTipForHideProgram->SetToolTip(hideProgram, "Свернуть");
		ToolTip^ toolTipForMaximizeWindow = gcnew ToolTip();
		toolTipForMaximizeWindow->SetToolTip(maximizeWindow, "Развернуть");
		ToolTip^ toolTipForMinimizeWindow = gcnew ToolTip();
		toolTipForMinimizeWindow->SetToolTip(minimizeWindow, "Восстановить");
		ToolTip^ toolTipForCloseProgram = gcnew ToolTip();
		toolTipForCloseProgram->SetToolTip(closeProgram, "Закрыть");
		ToolTip^ toolTipForSearch = gcnew ToolTip();
		toolTipForSearch->SetToolTip(searchIcon, "Поиск");
		ToolTip^ toolTipForChoicebyUser = gcnew ToolTip();
		toolTipForChoicebyUser->SetToolTip(byUserChoice, "Перетаскивайте задачи, чтобы задать их собственную сортировку");
		ToolTip^ toolTipForChoicebyUserDl = gcnew ToolTip();
		toolTipForChoicebyUserDl->SetToolTip(byUserChoiceDL, "Перетаскивайте задачи, чтобы задать их собственную сортировку");
		ToolTip^ toolTipForDoneOptions = gcnew ToolTip();
		toolTipForDoneOptions->SetToolTip(donePictureBox, "Опции");
		ToolTip^ toolTipForDeleteAllDoings = gcnew ToolTip();
		toolTipForDeleteAllDoings->SetToolTip(deleteAllDoings, "Удаление информации о выполненных задачах");
		ToolTip^ toolTipForSaveAllDoings = gcnew ToolTip();
		toolTipForSaveAllDoings->SetToolTip(saveDoings, "Сохранение информации о выполненных задачах в отдельный файл");
		ToolTip^ toolTipForDoToday = gcnew ToolTip();
		toolTipForDoToday->SetToolTip(toRight, "Сделать сегодня");
		ToolTip^ toolTipForPutOff = gcnew ToolTip();
		toolTipForPutOff->SetToolTip(toLeft, "Отложить");
		ToolTip^ toolTipForDelete = gcnew ToolTip();
		toolTipForDelete->SetToolTip(toDelete, "Удалить задачу");
		ToolTip^ toolTipForDone = gcnew ToolTip();
		toolTipForDone->SetToolTip(doneButton, "Завершить");

		boardButton->Focus();
	}

	private: System::Void moveSidePanel(Control^ c)
	{
		sidePanel->Height = c->Height;
		sidePanel->Top = c->Top;
	}

	private: System::Void boardButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		boardButton->Normalcolor = Color::FromArgb(14, 51, 119);
		aimsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		projectsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		calendarButton->Normalcolor = Color::FromArgb(18, 64, 149);
		statisticsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		resultsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		healthButton->Normalcolor = Color::FromArgb(18, 64, 149);
		notesButton->Normalcolor = Color::FromArgb(18, 64, 149);
		remindersButton->Normalcolor = Color::FromArgb(18, 64, 149);

		moveSidePanel(boardButton);
	}

	private: System::Void aimsButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		aimsButton->Normalcolor = Color::FromArgb(14, 51, 119);
		boardButton->Normalcolor = Color::FromArgb(18, 64, 149);
		projectsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		calendarButton->Normalcolor = Color::FromArgb(18, 64, 149);
		statisticsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		resultsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		healthButton->Normalcolor = Color::FromArgb(18, 64, 149);
		notesButton->Normalcolor = Color::FromArgb(18, 64, 149);
		remindersButton->Normalcolor = Color::FromArgb(18, 64, 149);

		moveSidePanel(aimsButton);
	}

	private: System::Void projectsButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		projectsButton->Normalcolor = Color::FromArgb(14, 51, 119);
		boardButton->Normalcolor = Color::FromArgb(18, 64, 149);
		aimsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		calendarButton->Normalcolor = Color::FromArgb(18, 64, 149);
		statisticsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		resultsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		healthButton->Normalcolor = Color::FromArgb(18, 64, 149);
		notesButton->Normalcolor = Color::FromArgb(18, 64, 149);
		remindersButton->Normalcolor = Color::FromArgb(18, 64, 149);

		moveSidePanel(projectsButton);
	}

	private: System::Void calendarButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		calendarButton->Normalcolor = Color::FromArgb(14, 51, 119);
		boardButton->Normalcolor = Color::FromArgb(18, 64, 149);
		aimsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		projectsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		statisticsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		resultsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		healthButton->Normalcolor = Color::FromArgb(18, 64, 149);
		notesButton->Normalcolor = Color::FromArgb(18, 64, 149);
		remindersButton->Normalcolor = Color::FromArgb(18, 64, 149);

		moveSidePanel(calendarButton);
	}

	private: System::Void statisticsButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		statisticsButton->Normalcolor = Color::FromArgb(14, 51, 119);
		boardButton->Normalcolor = Color::FromArgb(18, 64, 149);
		aimsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		projectsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		calendarButton->Normalcolor = Color::FromArgb(18, 64, 149);
		resultsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		healthButton->Normalcolor = Color::FromArgb(18, 64, 149);
		notesButton->Normalcolor = Color::FromArgb(18, 64, 149);
		remindersButton->Normalcolor = Color::FromArgb(18, 64, 149);

		moveSidePanel(statisticsButton);
	}

	private: System::Void resultsButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		resultsButton->Normalcolor = Color::FromArgb(14, 51, 119);
		boardButton->Normalcolor = Color::FromArgb(18, 64, 149);
		aimsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		projectsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		calendarButton->Normalcolor = Color::FromArgb(18, 64, 149);
		statisticsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		healthButton->Normalcolor = Color::FromArgb(18, 64, 149);
		notesButton->Normalcolor = Color::FromArgb(18, 64, 149);
		remindersButton->Normalcolor = Color::FromArgb(18, 64, 149);

		moveSidePanel(resultsButton);
	}

	private: System::Void healthButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		healthButton->Normalcolor = Color::FromArgb(14, 51, 119);
		boardButton->Normalcolor = Color::FromArgb(18, 64, 149);
		aimsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		projectsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		calendarButton->Normalcolor = Color::FromArgb(18, 64, 149);
		statisticsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		resultsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		notesButton->Normalcolor = Color::FromArgb(18, 64, 149);
		remindersButton->Normalcolor = Color::FromArgb(18, 64, 149);

		moveSidePanel(healthButton);
	}

	private: System::Void notesButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		notesButton->Normalcolor = Color::FromArgb(14, 51, 119);
		boardButton->Normalcolor = Color::FromArgb(18, 64, 149);
		aimsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		projectsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		calendarButton->Normalcolor = Color::FromArgb(18, 64, 149);
		statisticsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		resultsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		healthButton->Normalcolor = Color::FromArgb(18, 64, 149);
		remindersButton->Normalcolor = Color::FromArgb(18, 64, 149);

		moveSidePanel(notesButton);
	}

	private: System::Void remindersButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		remindersButton->Normalcolor = Color::FromArgb(14, 51, 119);
		boardButton->Normalcolor = Color::FromArgb(18, 64, 149);
		aimsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		projectsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		calendarButton->Normalcolor = Color::FromArgb(18, 64, 149);
		statisticsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		resultsButton->Normalcolor = Color::FromArgb(18, 64, 149);
		healthButton->Normalcolor = Color::FromArgb(18, 64, 149);
		notesButton->Normalcolor = Color::FromArgb(18, 64, 149);

		moveSidePanel(remindersButton);
	}

	private: System::Void maximizeWindow_Click(System::Object^ sender, System::EventArgs^ e)
	{
		WindowState = FormWindowState::Maximized;

		maximizeWindow->Visible = false;
		minimizeWindow->Visible = true;
	}

	private: System::Void hideProgram_Click(System::Object^ sender, System::EventArgs^ e)
	{
		WindowState = FormWindowState::Minimized;
	}

	private: System::Void minimizeWindow_Click(System::Object^ sender, System::EventArgs^ e)
	{
		WindowState = FormWindowState::Normal;

		minimizeWindow->Visible = false;
		maximizeWindow->Visible = true;
	}

	private: System::Void threeDots_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (leftPanel->Width == 218)
		{
			leftPanel->Width = 48;
		}
		else
		{
			leftPanel->Width = 218;
		}
	}

	private: System::Void addNewDoingButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		addNewDoing^ windowForAddNewDoing = gcnew addNewDoing();

		windowForAddNewDoing->Owner = this;
		windowForAddNewDoing->ShowDialog();

		if (windowForAddNewDoing->DialogResult == System::Windows::Forms::DialogResult::OK)
		{
			if ((System::IO::File::ReadAllText("data.txt")->Split('\n')[0] != "error") && (System::IO::File::ReadAllText("data.txt")->Split('\n')[1]!="error"))
			{
				ListViewItem^ item = gcnew ListViewItem();
				ListViewGroup^ group = gcnew ListViewGroup();
				ListViewItem::ListViewSubItem^ description = gcnew ListViewItem::ListViewSubItem(); 

				item->Text = System::IO::File::ReadAllText("data.txt")->Split('\n')[0];
				item->UseItemStyleForSubItems = false;
				group->HeaderAlignment = HorizontalAlignment::Center;
				description->ForeColor = Color::FromArgb(14, 51, 119);
				description->Font = gcnew System::Drawing::Font("Century", 10, System::Drawing::FontStyle::Italic);

				int currentIndexOfGroup, currentIndexOfElement;

				if (doingsList->Items->Count == 0)
				{
					listIsEmptyLabel->Visible = false;
					doingsList->Items->Add(item);
					
					if (!String::IsNullOrWhiteSpace(System::IO::File::ReadAllText("data.txt")->Split('\n')[1]))
					{
						group->Header = ("Дедлайн: " + System::IO::File::ReadAllText("data.txt")->Split('\n')[1]);
						doingsList->Groups->Add(group);
						doingsList->Items[0]->Group = doingsList->Groups[0];
					}
					else if (String::IsNullOrWhiteSpace(System::IO::File::ReadAllText("data.txt")->Split('\n')[1]))
					{
						group->Header = (System::IO::File::ReadAllText("data.txt")->Split('\n')[1]);
						group->HeaderAlignment = HorizontalAlignment::Left;
						doingsList->Groups->Add(group);
						doingsList->Items[0]->Group = doingsList->Groups[0];
					}

					if (!String::IsNullOrWhiteSpace(System::IO::File::ReadAllText("description.txt")))
					{
						array<String^>^ rows = System::IO::File::ReadAllLines("description.txt");
						if (rows->Length != 1)
						{
							for (int i = 0; i < rows->Length; i++)
							{
								description->Text += System::IO::File::ReadAllText("description.txt")->Split('\n')[i] + " ";
							}
						}
						else
						{
							description->Text = System::IO::File::ReadAllText("description.txt");
						}
						doingsList->Items[0]->SubItems->Add(description);
					}

					if (!String::IsNullOrWhiteSpace(System::IO::File::ReadAllText("data.txt")->Split('\n')[2]))
					{
						doingsList->Items[0]->ForeColor = windowForAddNewDoing->colorOfTextDoing->SymbolColor;
					}

					if (!String::IsNullOrWhiteSpace(System::IO::File::ReadAllText("data.txt")->Split('\n')[3]))
					{
						doingsList->Items[0]->BackColor = windowForAddNewDoing->colorOfBackColorDoing->SymbolColor;
					}
				}
				else
				{
					doingsList->Items->Add(item);
					currentIndexOfElement = doingsList->Items->Count;
					int counterOfUnsuccessfulAttempts = 0;

					if (!String::IsNullOrWhiteSpace(System::IO::File::ReadAllText("data.txt")->Split('\n')[1]))
					{
						group->Header = ("Дедлайн: " + System::IO::File::ReadAllText("data.txt")->Split('\n')[1]);
						
						for (int i = 0, countOfGroups = doingsList->Groups->Count; i < countOfGroups; )
						{
							if (doingsList->Groups[i]->Header == group->Header)
							{
								doingsList->Items[currentIndexOfElement - 1]->Group = doingsList->Groups[i];
								i = doingsList->Groups->Count;
							}
							else if (doingsList->Groups[i]->Header != group->Header)
							{
								counterOfUnsuccessfulAttempts++;
								i++;
							}
						}
						
						if (counterOfUnsuccessfulAttempts == doingsList->Groups->Count)
						{
							doingsList->Groups->Add(group);
							currentIndexOfGroup = doingsList->Groups->Count;
							doingsList->Items[currentIndexOfElement - 1]->Group = doingsList->Groups[currentIndexOfGroup - 1];
						}
					}
					else if (String::IsNullOrWhiteSpace(System::IO::File::ReadAllText("data.txt")->Split('\n')[1]))
					{
						group->Header = (System::IO::File::ReadAllText("data.txt")->Split('\n')[1]);
						group->HeaderAlignment = HorizontalAlignment::Left;
						
						for (int i = 0; i < doingsList->Groups->Count; )
						{
							if (doingsList->Groups[i]->Header == group->Header)
							{
								doingsList->Items[currentIndexOfElement - 1]->Group = doingsList->Groups[i];
								i = doingsList->Groups->Count;
							}
							else if (doingsList->Groups[i]->Header != group->Header)
							{
								counterOfUnsuccessfulAttempts++;
								i++;
							}
						}

						if (counterOfUnsuccessfulAttempts == doingsList->Groups->Count)
						{
							doingsList->Groups->Add(group);
							currentIndexOfGroup = doingsList->Groups->Count;
							doingsList->Items[currentIndexOfElement - 1]->Group = doingsList->Groups[currentIndexOfGroup - 1];
						}
					}

					if (!String::IsNullOrWhiteSpace(System::IO::File::ReadAllText("description.txt")))
					{
						array<String^>^ rows = System::IO::File::ReadAllLines("description.txt");
						
						if (rows->Length != 1)
						{
							for (int i = 0; i < rows->Length; i++)
							{
								description->Text += System::IO::File::ReadAllText("description.txt")->Split('\n')[i] + " ";
							}
						}
						else
						{
							description->Text = System::IO::File::ReadAllText("description.txt");
						}

						doingsList->Items[currentIndexOfElement - 1]->SubItems->Add(description);
					}

					if (!String::IsNullOrWhiteSpace(System::IO::File::ReadAllText("data.txt")->Split('\n')[2]))
					{
						doingsList->Items[currentIndexOfElement - 1]->ForeColor = windowForAddNewDoing->colorOfTextDoing->SymbolColor;
					}

					if (!String::IsNullOrWhiteSpace(System::IO::File::ReadAllText("data.txt")->Split('\n')[3]))
					{
						doingsList->Items[currentIndexOfElement - 1]->BackColor = windowForAddNewDoing->colorOfBackColorDoing->SymbolColor;
					}
				}

				amountOfDoings->Text = Convert::ToString(doingsList->Items->Count);
			}
		}
	}

	private: System::Void sortingListButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		sortingBox->Visible = true;
		sortingListButton->Visible = false;
		sortingListButton_2->Visible = true;
	}

	private: System::Void searchForDoings_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		if (searchForDoings->Text == "поиск задач")
		{
			searchForDoings->Clear();
			searchForDoings->ForeColor = Color::White;
		}
	}

	private: System::Void sortingForDoingsListButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		sortingForDoingsListBox->Visible = true;
		sortingForDoingsListButton->Visible = false;
		sortingForDoingsListButton2->Visible = true;
	}
	
	private: System::Void sortingForDoingsListButton2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		sortingForDoingsListBox->Visible = false;
		sortingForDoingsListButton2->Visible = false;
		sortingForDoingsListButton->Visible = true;
	}

	private: System::Void sortingListButton_2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		sortingBox->Visible = false;
		sortingListButton_2->Visible = false;
		sortingListButton->Visible = true;
	}

	private: System::Void doingsList_ItemSelectionChanged(System::Object^ sender, System::Windows::Forms::ListViewItemSelectionChangedEventArgs^ e)
	{
		selectedItem = e->Item;
	}

	private: System::Void toDelete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (doingsList->SelectedItems->Count == 0)
		{
			MessageBox::Show(this, "Задача не выбрана!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			selectedItem->Remove();
			amountOfDoings->Text = Convert::ToString(doingsList->Items->Count);
		}
	}

	private: System::Void doingsList_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (doingsList->SelectedItems->Count != 0)
		{
			toDeleteInactive->Visible = false;
			toDelete->Visible = true;
		}
		else
		{
			toDeleteInactive->Visible = true;
			toDelete->Visible = false;
		}
	}

	private: System::Void toRight_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (doingsList->SelectedItems->Count == 0)
		{
			MessageBox::Show(this, "Задача не выбрана!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			ListViewGroup^ group = gcnew ListViewGroup();
			group->Header = selectedItem->Group->Header;

			if (String::IsNullOrWhiteSpace(group->Header))
			{
				group->HeaderAlignment = HorizontalAlignment::Left;
			}
			else
			{
				group->HeaderAlignment = HorizontalAlignment::Center;
			}

			if (selectedItem->Group->Items->Count < 2)
			{
				doingsList->Groups->RemoveAt(selectedItem->Index);
				selectedItem->Remove();
			}
			else
			{
				selectedItem->Remove();
			}

			amountOfDoings->Text = Convert::ToString(doingsList->Items->Count); //количество дел в первом листе
			currentDoing->Visible = true;

			if (doingsTodayList->Items->Count == 0) //если мы добавляем первый элемент
			{
				isAnythingTodayLabel->Visible = false; //второй лист уже не пуст
				doingsTodayList->Items->Add(selectedItem);
				doingsTodayList->Groups->Add(group);
				doingsTodayList->Items[0]->Group = doingsTodayList->Groups[0];
				currentDoing->Text = doingsTodayList->Items[0]->Text;
			}
			else
			{
				doingsTodayList->Items->Add(selectedItem);
				int curItems = doingsTodayList->Items->Count;
				int counterOfUnsuccessfulAttempts = 0;

				for (int i = 0; i < doingsTodayList->Groups->Count; )
				{
					if (doingsTodayList->Groups[i]->Header == group->Header)
					{
						doingsTodayList->Items[curItems - 1]->Group = doingsTodayList->Groups[i];
						i = doingsTodayList->Groups->Count;
					}
					else
					{
						counterOfUnsuccessfulAttempts++;
						i++;
					}
				}

				if (counterOfUnsuccessfulAttempts == doingsTodayList->Groups->Count)
				{
					doingsTodayList->Groups->Add(group);
					curItems = doingsTodayList->Items->Count;
					int curGroup = doingsTodayList->Groups->Count;
					doingsTodayList->Items[curItems - 1]->Group = doingsTodayList->Groups[curGroup - 1];
				}

				nextDoing->Visible = true;
				nextDoing->Text = doingsTodayList->Items[1]->Text;
			}

			countOfDoingsToday->Text = Convert::ToString(doingsTodayList->Items->Count);
			
			if (doingsList->Items->Count == 0)
			{
				listIsEmptyLabel->Visible = true;
			}
		}
	}

	private: System::Void donePictureBox_Click(System::Object^ sender, System::EventArgs^ e)
	{
		doneOptions->Visible = true;
		donePictureBox->Visible = false;
		donePictureBox2->Visible = true;
	}

	private: System::Void donePictureBox2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		doneOptions->Visible = false;
		donePictureBox2->Visible = false;
		donePictureBox->Visible = true;
	}

	private: System::Void toLeft_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (doingsTodayList->SelectedItems->Count == 0)
		{
			MessageBox::Show(this, "Задача не выбрана!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			ListViewGroup^ group = gcnew ListViewGroup();
			group->Header = selectedItemToday->Group->Header;

			if (String::IsNullOrWhiteSpace(group->Header))
			{
				group->HeaderAlignment = HorizontalAlignment::Left;
			}
			else
			{
				group->HeaderAlignment = HorizontalAlignment::Center;
			}

			if (selectedItemToday->Group->Items->Count < 2)
			{
				doingsTodayList->Groups->RemoveAt(selectedItemToday->Index);
				selectedItemToday->Remove();
			}
			else
			{
				selectedItemToday->Remove();
			}

			countOfDoingsToday->Text = Convert::ToString(doingsTodayList->Items->Count);
			
			if (doingsList->Items->Count == 0) //если мы добавляем первый элемент
			{
				listIsEmptyLabel->Visible = false; //первый лист уже не пуст
				doingsList->Items->Add(selectedItemToday);
				doingsList->Groups->Add(group);
				doingsList->Items[0]->Group = doingsList->Groups[0];
			}
			else
			{
				doingsList->Items->Add(selectedItemToday);
				int curItems = doingsList->Items->Count;
				int counterOfUnsuccessfulAttempts = 0;

				for (int i = 0; i < doingsList->Groups->Count; )
				{
					if (doingsList->Groups[i]->Header == group->Header)
					{
						doingsList->Items[curItems - 1]->Group = doingsList->Groups[i];
						i = doingsList->Groups->Count;
					}
					else
					{
						counterOfUnsuccessfulAttempts++;
						i++;
					}
				}

				if (counterOfUnsuccessfulAttempts == doingsList->Groups->Count)
				{
					doingsList->Groups->Add(group);
					curItems = doingsList->Items->Count;
					int curGroup = doingsList->Groups->Count;
					doingsList->Items[curItems - 1]->Group = doingsList->Groups[curGroup - 1];
				}
			}
			
			amountOfDoings->Text = Convert::ToString(doingsList->Items->Count);

			if (doingsTodayList->Items->Count == 0)
			{
				currentDoing->Visible = false;
				nextDoing->Visible = false;
				isAnythingTodayLabel->Visible = true;
			}
			else
			{
				if (doingsTodayList->Items->Count > 1)
				{
					nextDoing->Text = doingsTodayList->Items[1]->Text;
					currentDoing->Text = doingsTodayList->Items[0]->Text;
				}
				else
				{
					nextDoing->Visible = false;
					currentDoing->Text = doingsTodayList->Items[0]->Text;
				}
			}
		}
	}

	private: System::Void doingsTodayList_ItemSelectionChanged(System::Object^ sender, System::Windows::Forms::ListViewItemSelectionChangedEventArgs^ e)
	{
		selectedItemToday = e->Item;
	}

	private: System::Void doneButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (doingsTodayList->SelectedItems->Count == 0)
		{
			MessageBox::Show(this, "Задача не выбрана!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			isNothingLabel->Visible = false;

			if (selectedItemToday->Group->Items->Count < 2)
			{
				doingsTodayList->Groups->RemoveAt(selectedItemToday->Index);
				selectedItemToday->Remove();
			}
			else
			{
				selectedItemToday->Remove();
			}

			countOfDoingsToday->Text = Convert::ToString(doingsTodayList->Items->Count);
			doneList->Text += selectedItemToday->Text + ",  ";
		}

		if (doingsTodayList->Items->Count == 0)
		{
			currentDoing->Visible = false;
			nextDoing->Visible = false;
			isAnythingTodayLabel->Visible = true;
		}
		else
		{
			if (doingsTodayList->Items->Count > 1)
			{
				nextDoing->Text = doingsTodayList->Items[1]->Text;
				currentDoing->Text = doingsTodayList->Items[0]->Text;
			}
			else
			{
				nextDoing->Visible = false;
				currentDoing->Text = doingsTodayList->Items[0]->Text;
			}
		}
	}

	private: System::Void searchIcon_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int counter = 0;
		
		if (doingsList->Items->Count == 0 && doingsTodayList->Items->Count == 0)
		{
			MessageBox::Show(this, "Ваши списки пусты.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			for (int i = 0; i < doingsList->Items->Count; )
			{
				if (doingsList->Items[i]->Text == searchForDoings->Text)
				{
					MessageBox::Show(this, "Задача с таким именем находится в списке всех дел.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
					doingsList->Items[i]->Selected = true;
					i = doingsList->Items->Count;
				}
				else
				{
					i++;
					counter++;
				}
			}

			if (counter == doingsList->Items->Count)
			{
				for (int i = 0; i < doingsTodayList->Items->Count; )
				{
					if (doingsTodayList->Items[i]->Text == searchForDoings->Text)
					{
						MessageBox::Show(this, "Задача с таким именем находится в списке Сделать сегодня.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
						doingsTodayList->Items[i]->Selected = true;
						i = doingsTodayList->Items->Count;
					}
					else if (doingsTodayList->Items[i]->Text != searchForDoings->Text)
					{
						i++;
						counter += i;
					}
				}
			}

			if (counter == doingsList->Items->Count + doingsTodayList->Items->Count)
			{
				MessageBox::Show(this, "Задача с таким именем не найдена.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
	}

	private: System::Void deleteAllDoings_Click(System::Object^ sender, System::EventArgs^ e)
	{
		result = MessageBox::Show(this, "Очистить список выполненных дел?", "Подтверждение действия", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
		
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			doneList->Clear();
		}
	}

	private: System::Void saveDoings_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
			return;
		
		String^ filename = saveFileDialog1->FileName;
		System::IO::File::WriteAllText(filename, doneList->Text);
		MessageBox::Show(this, "Файл сохранен", "Готово", MessageBoxButtons::OK);
	}

	private: System::Void списокВсехДелToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (doingsList->Items->Count == 0)
		{
			MessageBox::Show(this, "Задачи не могут быть сохранены, так как лист пуст.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
				return;

			String^ filename = saveFileDialog1->FileName;
			String^ doings;
			
			for (int i = 0; i < doingsList->Items->Count; i++)
			{
				doings += doingsList->Items[i]->Text + " " + doingsList->Items[i]->Group->Header + "\n";
			}

			System::IO::File::WriteAllText(filename, doings);
			MessageBox::Show(this, "Файл сохранен", "Готово", MessageBoxButtons::OK);
		}
	}

	private: System::Void списокВсехДелToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (doingsList->Items->Count == 0)
		{
			MessageBox::Show(this, "Задачи не могут быть сохранены, так как лист пуст.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
				return;

			String^ filename = saveFileDialog1->FileName;
			String^ doings;

			for (int i = 0; i < doingsList->Items->Count; i++)
			{
				doings += doingsList->Items[i]->Text + "\n";
			}

			System::IO::File::WriteAllText(filename, doings);
			MessageBox::Show(this, "Файл сохранен", "Готово", MessageBoxButtons::OK);
		}
	}

	private: System::Void сделатьСегодняToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (doingsTodayList->Items->Count == 0)
		{
			MessageBox::Show(this, "Задачи не могут быть сохранены, так как лист пуст.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
				return;

			String^ filename = saveFileDialog1->FileName;
			String^ doings;

			for (int i = 0; i < doingsTodayList->Items->Count; i++)
			{
				doings += doingsTodayList->Items[i]->Text + " " + doingsTodayList->Items[i]->Group->Header + "\n";
			}

			System::IO::File::WriteAllText(filename, doings);
			MessageBox::Show(this, "Файл сохранен", "Готово", MessageBoxButtons::OK);
		}
	}

	private: System::Void сделатьСегодняToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (doingsTodayList->Items->Count == 0)
		{
			MessageBox::Show(this, "Задачи не могут быть сохранены, так как лист пуст.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
				return;

			String^ filename = saveFileDialog1->FileName;
			String^ doings;

			for (int i = 0; i < doingsTodayList->Items->Count; i++)
			{
				doings += doingsTodayList->Items[i]->Text + "\n";
			}
			
			System::IO::File::WriteAllText(filename, doings);
			MessageBox::Show(this, "Файл сохранен", "Готово", MessageBoxButtons::OK);
		}
	}

	private: System::Void темыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		formSettings^ windowFormSettings = gcnew formSettings();
		windowFormSettings->Owner = this;
		windowFormSettings->ShowDialog();
	}

	private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		refForm^ windowReference = gcnew refForm();
		windowReference->Owner = this;
		windowReference->ShowDialog();
	}

	private: System::Void оРазработчикеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		aboutMeForm^ windowInform = gcnew aboutMeForm();
		windowInform->Owner = this;
		windowInform->ShowDialog();
	}

	private:
	#pragma region Windows Form Designer generated code
			void InitializeComponent(void)
			{
				this->components = (gcnew System::ComponentModel::Container());
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
				this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
				this->leftPanel = (gcnew System::Windows::Forms::Panel());
				this->remindersButton = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
				this->sidePanel = (gcnew System::Windows::Forms::Panel());
				this->boardButton = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
				this->projectsButton = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
				this->aimsButton = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
				this->statisticsButton = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
				this->calendarButton = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
				this->healthButton = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
				this->resultsButton = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
				this->notesButton = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
				this->leaderplanIcon = (gcnew System::Windows::Forms::PictureBox());
				this->leaderplan = (gcnew System::Windows::Forms::PictureBox());
				this->searchForDoings = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
				this->searchIcon = (gcnew System::Windows::Forms::PictureBox());
				this->topPanel = (gcnew System::Windows::Forms::Panel());
				this->currentDoing = (gcnew System::Windows::Forms::Label());
				this->nextDoing = (gcnew System::Windows::Forms::Label());
				this->countOfDoingsToday = (gcnew System::Windows::Forms::Label());
				this->currentDate = (gcnew System::Windows::Forms::Label());
				this->threeDots = (gcnew System::Windows::Forms::PictureBox());
				this->nextTaskLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
				this->currentDateLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
				this->allDoingsLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
				this->currentTaskLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
				this->hideProgram = (gcnew System::Windows::Forms::PictureBox());
				this->minimizeWindow = (gcnew System::Windows::Forms::PictureBox());
				this->closeProgram = (gcnew System::Windows::Forms::PictureBox());
				this->panel5 = (gcnew System::Windows::Forms::Panel());
				this->panel6 = (gcnew System::Windows::Forms::Panel());
				this->isNothingLabel = (gcnew System::Windows::Forms::Label());
				this->doneList = (gcnew System::Windows::Forms::RichTextBox());
				this->panel1 = (gcnew System::Windows::Forms::Panel());
				this->amountOfDoings = (gcnew System::Windows::Forms::Label());
				this->amountOfDoingsLabel = (gcnew System::Windows::Forms::Label());
				this->panel2 = (gcnew System::Windows::Forms::Panel());
				this->listIsEmptyLabel = (gcnew System::Windows::Forms::Label());
				this->doingsList = (gcnew System::Windows::Forms::ListView());
				this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
				this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
				this->panel3 = (gcnew System::Windows::Forms::Panel());
				this->isAnythingTodayLabel = (gcnew System::Windows::Forms::Label());
				this->doingsTodayList = (gcnew System::Windows::Forms::ListView());
				this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
				this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
				this->separator_3 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
				this->listOfAllDoingsLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
				this->doTodayLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
				this->alreadyDoneLabel = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
				this->donePictureBox = (gcnew System::Windows::Forms::PictureBox());
				this->menuOptions = (gcnew System::Windows::Forms::MenuStrip());
				this->ФайлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->docxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->txtToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->сделаноToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->списокВсехДелToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->сделатьСегодняToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->сохранитьБезДедлайнаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->списокВсехДелToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->сделатьСегодняToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->разработчикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->темыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->восстановитToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->разработчикToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->навигацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->доскаСписковДелToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->списокЦелейToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->проектыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->календарьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->статистикаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->подведениеИтоговToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->калорииИВесToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->заметкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->напоминанияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->оРазработчикеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->maximizeWindow = (gcnew System::Windows::Forms::PictureBox());
				this->moverTopPanel = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
				this->moverMenu = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
				this->firstList = (gcnew System::Windows::Forms::GroupBox());
				this->addNewDoingButton = (gcnew System::Windows::Forms::PictureBox());
				this->secondList = (gcnew System::Windows::Forms::GroupBox());
				this->sortingListButton2 = (gcnew System::Windows::Forms::PictureBox());
				this->thirdList = (gcnew System::Windows::Forms::GroupBox());
				this->sortingListButton = (gcnew System::Windows::Forms::PictureBox());
				this->sortingBox = (gcnew System::Windows::Forms::GroupBox());
				this->byDefault = (gcnew System::Windows::Forms::RadioButton());
				this->byUserChoice = (gcnew System::Windows::Forms::RadioButton());
				this->byImportance = (gcnew System::Windows::Forms::RadioButton());
				this->sortingForDoingsListButton = (gcnew System::Windows::Forms::PictureBox());
				this->sortingForDoingsListBox = (gcnew System::Windows::Forms::GroupBox());
				this->byDatesChoice = (gcnew System::Windows::Forms::RadioButton());
				this->byDefaultDL = (gcnew System::Windows::Forms::RadioButton());
				this->byUserChoiceDL = (gcnew System::Windows::Forms::RadioButton());
				this->byImportanceDL = (gcnew System::Windows::Forms::RadioButton());
				this->sortingForDoingsListButton2 = (gcnew System::Windows::Forms::PictureBox());
				this->sortingListButton_2 = (gcnew System::Windows::Forms::PictureBox());
				this->toRight = (gcnew System::Windows::Forms::PictureBox());
				this->toLeft = (gcnew System::Windows::Forms::PictureBox());
				this->toDelete = (gcnew System::Windows::Forms::PictureBox());
				this->toDeleteInactive = (gcnew System::Windows::Forms::PictureBox());
				this->doneButton = (gcnew System::Windows::Forms::PictureBox());
				this->doneOptions = (gcnew System::Windows::Forms::GroupBox());
				this->saveDoings = (gcnew System::Windows::Forms::Button());
				this->deleteAllDoings = (gcnew System::Windows::Forms::Button());
				this->donePictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
				this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
				this->leftPanel->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leaderplanIcon))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leaderplan))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchIcon))->BeginInit();
				this->topPanel->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->threeDots))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hideProgram))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimizeWindow))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closeProgram))->BeginInit();
				this->panel5->SuspendLayout();
				this->panel6->SuspendLayout();
				this->panel1->SuspendLayout();
				this->panel2->SuspendLayout();
				this->panel3->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->donePictureBox))->BeginInit();
				this->menuOptions->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maximizeWindow))->BeginInit();
				this->firstList->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addNewDoingButton))->BeginInit();
				this->secondList->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sortingListButton2))->BeginInit();
				this->thirdList->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sortingListButton))->BeginInit();
				this->sortingBox->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sortingForDoingsListButton))->BeginInit();
				this->sortingForDoingsListBox->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sortingForDoingsListButton2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sortingListButton_2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toRight))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toLeft))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toDelete))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toDeleteInactive))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->doneButton))->BeginInit();
				this->doneOptions->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->donePictureBox2))->BeginInit();
				this->SuspendLayout();
				// 
				// bunifuElipse1
				// 
				this->bunifuElipse1->ElipseRadius = 5;
				this->bunifuElipse1->TargetControl = this->leftPanel;
				// 
				// leftPanel
				// 
				this->leftPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left));
				this->leftPanel->BackColor = System::Drawing::SystemColors::HotTrack;
				this->leftPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"leftPanel.BackgroundImage")));
				this->leftPanel->Controls->Add(this->remindersButton);
				this->leftPanel->Controls->Add(this->sidePanel);
				this->leftPanel->Controls->Add(this->boardButton);
				this->leftPanel->Controls->Add(this->projectsButton);
				this->leftPanel->Controls->Add(this->aimsButton);
				this->leftPanel->Controls->Add(this->statisticsButton);
				this->leftPanel->Controls->Add(this->calendarButton);
				this->leftPanel->Controls->Add(this->healthButton);
				this->leftPanel->Controls->Add(this->resultsButton);
				this->leftPanel->Controls->Add(this->notesButton);
				this->leftPanel->Location = System::Drawing::Point(0, 86);
				this->leftPanel->Name = L"leftPanel";
				this->leftPanel->Size = System::Drawing::Size(218, 682);
				this->leftPanel->TabIndex = 1;
				// 
				// remindersButton
				// 
				this->remindersButton->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(119)));
				this->remindersButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->remindersButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->remindersButton->BorderRadius = 0;
				this->remindersButton->ButtonText = L"    Напоминания";
				this->remindersButton->Cursor = System::Windows::Forms::Cursors::Hand;
				this->remindersButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->remindersButton->Iconcolor = System::Drawing::Color::Transparent;
				this->remindersButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"remindersButton.Iconimage")));
				this->remindersButton->Iconimage_right = nullptr;
				this->remindersButton->Iconimage_right_Selected = nullptr;
				this->remindersButton->Iconimage_Selected = nullptr;
				this->remindersButton->IconZoom = 55;
				this->remindersButton->IsTab = false;
				this->remindersButton->Location = System::Drawing::Point(4, 366);
				this->remindersButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
				this->remindersButton->Name = L"remindersButton";
				this->remindersButton->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->remindersButton->OnHovercolor = System::Drawing::Color::CornflowerBlue;
				this->remindersButton->OnHoverTextColor = System::Drawing::Color::White;
				this->remindersButton->selected = false;
				this->remindersButton->Size = System::Drawing::Size(222, 32);
				this->remindersButton->TabIndex = 4;
				this->remindersButton->Textcolor = System::Drawing::Color::White;
				this->remindersButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->remindersButton->Click += gcnew System::EventHandler(this, &MainForm::remindersButton_Click);
				// 
				// sidePanel
				// 
				this->sidePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
					static_cast<System::Int32>(static_cast<System::Byte>(230)));
				this->sidePanel->Location = System::Drawing::Point(0, 62);
				this->sidePanel->Name = L"sidePanel";
				this->sidePanel->Size = System::Drawing::Size(5, 32);
				this->sidePanel->TabIndex = 2;
				// 
				// boardButton
				// 
				this->boardButton->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
					static_cast<System::Int32>(static_cast<System::Byte>(119)));
				this->boardButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->boardButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->boardButton->BorderRadius = 0;
				this->boardButton->ButtonText = L"    Доска списков дел";
				this->boardButton->Cursor = System::Windows::Forms::Cursors::Hand;
				this->boardButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->boardButton->Iconcolor = System::Drawing::Color::Transparent;
				this->boardButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boardButton.Iconimage")));
				this->boardButton->Iconimage_right = nullptr;
				this->boardButton->Iconimage_right_Selected = nullptr;
				this->boardButton->Iconimage_Selected = nullptr;
				this->boardButton->IconZoom = 50;
				this->boardButton->IsTab = false;
				this->boardButton->Location = System::Drawing::Point(4, 62);
				this->boardButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
				this->boardButton->Name = L"boardButton";
				this->boardButton->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->boardButton->OnHovercolor = System::Drawing::Color::CornflowerBlue;
				this->boardButton->OnHoverTextColor = System::Drawing::Color::White;
				this->boardButton->selected = false;
				this->boardButton->Size = System::Drawing::Size(222, 32);
				this->boardButton->TabIndex = 3;
				this->boardButton->Textcolor = System::Drawing::Color::White;
				this->boardButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->boardButton->Click += gcnew System::EventHandler(this, &MainForm::boardButton_Click);
				// 
				// projectsButton
				// 
				this->projectsButton->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
					static_cast<System::Int32>(static_cast<System::Byte>(119)));
				this->projectsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->projectsButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->projectsButton->BorderRadius = 0;
				this->projectsButton->ButtonText = L"    Проекты";
				this->projectsButton->Cursor = System::Windows::Forms::Cursors::Hand;
				this->projectsButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->projectsButton->Iconcolor = System::Drawing::Color::Transparent;
				this->projectsButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"projectsButton.Iconimage")));
				this->projectsButton->Iconimage_right = nullptr;
				this->projectsButton->Iconimage_right_Selected = nullptr;
				this->projectsButton->Iconimage_Selected = nullptr;
				this->projectsButton->IconZoom = 50;
				this->projectsButton->IsTab = false;
				this->projectsButton->Location = System::Drawing::Point(4, 138);
				this->projectsButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
				this->projectsButton->Name = L"projectsButton";
				this->projectsButton->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->projectsButton->OnHovercolor = System::Drawing::Color::CornflowerBlue;
				this->projectsButton->OnHoverTextColor = System::Drawing::Color::White;
				this->projectsButton->selected = false;
				this->projectsButton->Size = System::Drawing::Size(222, 32);
				this->projectsButton->TabIndex = 4;
				this->projectsButton->Textcolor = System::Drawing::Color::White;
				this->projectsButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->projectsButton->Click += gcnew System::EventHandler(this, &MainForm::projectsButton_Click);
				// 
				// aimsButton
				// 
				this->aimsButton->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
					static_cast<System::Int32>(static_cast<System::Byte>(119)));
				this->aimsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->aimsButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->aimsButton->BorderRadius = 0;
				this->aimsButton->ButtonText = L"    Список целей";
				this->aimsButton->Cursor = System::Windows::Forms::Cursors::Hand;
				this->aimsButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->aimsButton->Iconcolor = System::Drawing::Color::Transparent;
				this->aimsButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aimsButton.Iconimage")));
				this->aimsButton->Iconimage_right = nullptr;
				this->aimsButton->Iconimage_right_Selected = nullptr;
				this->aimsButton->Iconimage_Selected = nullptr;
				this->aimsButton->IconZoom = 50;
				this->aimsButton->IsTab = false;
				this->aimsButton->Location = System::Drawing::Point(4, 100);
				this->aimsButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
				this->aimsButton->Name = L"aimsButton";
				this->aimsButton->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->aimsButton->OnHovercolor = System::Drawing::Color::CornflowerBlue;
				this->aimsButton->OnHoverTextColor = System::Drawing::Color::White;
				this->aimsButton->selected = false;
				this->aimsButton->Size = System::Drawing::Size(222, 32);
				this->aimsButton->TabIndex = 4;
				this->aimsButton->Textcolor = System::Drawing::Color::White;
				this->aimsButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->aimsButton->Click += gcnew System::EventHandler(this, &MainForm::aimsButton_Click);
				// 
				// statisticsButton
				// 
				this->statisticsButton->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)),
					static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(119)));
				this->statisticsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->statisticsButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->statisticsButton->BorderRadius = 0;
				this->statisticsButton->ButtonText = L"    Статистика";
				this->statisticsButton->Cursor = System::Windows::Forms::Cursors::Hand;
				this->statisticsButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->statisticsButton->Iconcolor = System::Drawing::Color::Transparent;
				this->statisticsButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"statisticsButton.Iconimage")));
				this->statisticsButton->Iconimage_right = nullptr;
				this->statisticsButton->Iconimage_right_Selected = nullptr;
				this->statisticsButton->Iconimage_Selected = nullptr;
				this->statisticsButton->IconZoom = 50;
				this->statisticsButton->IsTab = false;
				this->statisticsButton->Location = System::Drawing::Point(4, 214);
				this->statisticsButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
				this->statisticsButton->Name = L"statisticsButton";
				this->statisticsButton->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->statisticsButton->OnHovercolor = System::Drawing::Color::CornflowerBlue;
				this->statisticsButton->OnHoverTextColor = System::Drawing::Color::White;
				this->statisticsButton->selected = false;
				this->statisticsButton->Size = System::Drawing::Size(222, 32);
				this->statisticsButton->TabIndex = 4;
				this->statisticsButton->Textcolor = System::Drawing::Color::White;
				this->statisticsButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->statisticsButton->Click += gcnew System::EventHandler(this, &MainForm::statisticsButton_Click);
				// 
				// calendarButton
				// 
				this->calendarButton->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
					static_cast<System::Int32>(static_cast<System::Byte>(119)));
				this->calendarButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->calendarButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->calendarButton->BorderRadius = 0;
				this->calendarButton->ButtonText = L"    Календарь";
				this->calendarButton->Cursor = System::Windows::Forms::Cursors::Hand;
				this->calendarButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->calendarButton->Iconcolor = System::Drawing::Color::Transparent;
				this->calendarButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"calendarButton.Iconimage")));
				this->calendarButton->Iconimage_right = nullptr;
				this->calendarButton->Iconimage_right_Selected = nullptr;
				this->calendarButton->Iconimage_Selected = nullptr;
				this->calendarButton->IconZoom = 50;
				this->calendarButton->IsTab = false;
				this->calendarButton->Location = System::Drawing::Point(4, 176);
				this->calendarButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
				this->calendarButton->Name = L"calendarButton";
				this->calendarButton->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->calendarButton->OnHovercolor = System::Drawing::Color::CornflowerBlue;
				this->calendarButton->OnHoverTextColor = System::Drawing::Color::White;
				this->calendarButton->selected = false;
				this->calendarButton->Size = System::Drawing::Size(222, 32);
				this->calendarButton->TabIndex = 4;
				this->calendarButton->Textcolor = System::Drawing::Color::White;
				this->calendarButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->calendarButton->Click += gcnew System::EventHandler(this, &MainForm::calendarButton_Click);
				// 
				// healthButton
				// 
				this->healthButton->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
					static_cast<System::Int32>(static_cast<System::Byte>(119)));
				this->healthButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->healthButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->healthButton->BorderRadius = 0;
				this->healthButton->ButtonText = L"    Калории и вес";
				this->healthButton->Cursor = System::Windows::Forms::Cursors::Hand;
				this->healthButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->healthButton->Iconcolor = System::Drawing::Color::Transparent;
				this->healthButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"healthButton.Iconimage")));
				this->healthButton->Iconimage_right = nullptr;
				this->healthButton->Iconimage_right_Selected = nullptr;
				this->healthButton->Iconimage_Selected = nullptr;
				this->healthButton->IconZoom = 50;
				this->healthButton->IsTab = false;
				this->healthButton->Location = System::Drawing::Point(4, 290);
				this->healthButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
				this->healthButton->Name = L"healthButton";
				this->healthButton->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->healthButton->OnHovercolor = System::Drawing::Color::CornflowerBlue;
				this->healthButton->OnHoverTextColor = System::Drawing::Color::White;
				this->healthButton->selected = false;
				this->healthButton->Size = System::Drawing::Size(222, 32);
				this->healthButton->TabIndex = 4;
				this->healthButton->Textcolor = System::Drawing::Color::White;
				this->healthButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->healthButton->Click += gcnew System::EventHandler(this, &MainForm::healthButton_Click);
				// 
				// resultsButton
				// 
				this->resultsButton->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
					static_cast<System::Int32>(static_cast<System::Byte>(119)));
				this->resultsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->resultsButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->resultsButton->BorderRadius = 0;
				this->resultsButton->ButtonText = L"    Подведение итогов";
				this->resultsButton->Cursor = System::Windows::Forms::Cursors::Hand;
				this->resultsButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->resultsButton->Iconcolor = System::Drawing::Color::Transparent;
				this->resultsButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"resultsButton.Iconimage")));
				this->resultsButton->Iconimage_right = nullptr;
				this->resultsButton->Iconimage_right_Selected = nullptr;
				this->resultsButton->Iconimage_Selected = nullptr;
				this->resultsButton->IconZoom = 55;
				this->resultsButton->IsTab = false;
				this->resultsButton->Location = System::Drawing::Point(4, 252);
				this->resultsButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
				this->resultsButton->Name = L"resultsButton";
				this->resultsButton->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->resultsButton->OnHovercolor = System::Drawing::Color::CornflowerBlue;
				this->resultsButton->OnHoverTextColor = System::Drawing::Color::White;
				this->resultsButton->selected = false;
				this->resultsButton->Size = System::Drawing::Size(222, 32);
				this->resultsButton->TabIndex = 4;
				this->resultsButton->Textcolor = System::Drawing::Color::White;
				this->resultsButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->resultsButton->Click += gcnew System::EventHandler(this, &MainForm::resultsButton_Click);
				// 
				// notesButton
				// 
				this->notesButton->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
					static_cast<System::Int32>(static_cast<System::Byte>(119)));
				this->notesButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->notesButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->notesButton->BorderRadius = 0;
				this->notesButton->ButtonText = L"    Заметки";
				this->notesButton->Cursor = System::Windows::Forms::Cursors::Hand;
				this->notesButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->notesButton->Iconcolor = System::Drawing::Color::Transparent;
				this->notesButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"notesButton.Iconimage")));
				this->notesButton->Iconimage_right = nullptr;
				this->notesButton->Iconimage_right_Selected = nullptr;
				this->notesButton->Iconimage_Selected = nullptr;
				this->notesButton->IconZoom = 50;
				this->notesButton->IsTab = false;
				this->notesButton->Location = System::Drawing::Point(4, 328);
				this->notesButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
				this->notesButton->Name = L"notesButton";
				this->notesButton->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->notesButton->OnHovercolor = System::Drawing::Color::CornflowerBlue;
				this->notesButton->OnHoverTextColor = System::Drawing::Color::White;
				this->notesButton->selected = false;
				this->notesButton->Size = System::Drawing::Size(222, 32);
				this->notesButton->TabIndex = 4;
				this->notesButton->Textcolor = System::Drawing::Color::White;
				this->notesButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->notesButton->Click += gcnew System::EventHandler(this, &MainForm::notesButton_Click);
				// 
				// leaderplanIcon
				// 
				this->leaderplanIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"leaderplanIcon.Image")));
				this->leaderplanIcon->Location = System::Drawing::Point(30, 4);
				this->leaderplanIcon->Name = L"leaderplanIcon";
				this->leaderplanIcon->Size = System::Drawing::Size(49, 55);
				this->leaderplanIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->leaderplanIcon->TabIndex = 0;
				this->leaderplanIcon->TabStop = false;
				// 
				// leaderplan
				// 
				this->leaderplan->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"leaderplan.Image")));
				this->leaderplan->Location = System::Drawing::Point(85, 3);
				this->leaderplan->Name = L"leaderplan";
				this->leaderplan->Size = System::Drawing::Size(117, 62);
				this->leaderplan->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->leaderplan->TabIndex = 1;
				this->leaderplan->TabStop = false;
				// 
				// searchForDoings
				// 
				this->searchForDoings->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
				this->searchForDoings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
					static_cast<System::Int32>(static_cast<System::Byte>(119)));
				this->searchForDoings->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->searchForDoings->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->searchForDoings->ForeColor = System::Drawing::Color::CornflowerBlue;
				this->searchForDoings->Location = System::Drawing::Point(318, 22);
				this->searchForDoings->Name = L"searchForDoings";
				this->searchForDoings->Size = System::Drawing::Size(188, 22);
				this->searchForDoings->TabIndex = 3;
				this->searchForDoings->TabStop = false;
				this->searchForDoings->Text = L"поиск задач";
				this->searchForDoings->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::searchForDoings_MouseClick);
				// 
				// searchIcon
				// 
				this->searchIcon->Cursor = System::Windows::Forms::Cursors::Hand;
				this->searchIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchIcon.Image")));
				this->searchIcon->Location = System::Drawing::Point(512, 12);
				this->searchIcon->Name = L"searchIcon";
				this->searchIcon->Size = System::Drawing::Size(20, 47);
				this->searchIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->searchIcon->TabIndex = 4;
				this->searchIcon->TabStop = false;
				this->searchIcon->Click += gcnew System::EventHandler(this, &MainForm::searchIcon_Click);
				// 
				// topPanel
				// 
				this->topPanel->BackColor = System::Drawing::Color::CornflowerBlue;
				this->topPanel->Controls->Add(this->currentDoing);
				this->topPanel->Controls->Add(this->nextDoing);
				this->topPanel->Controls->Add(this->countOfDoingsToday);
				this->topPanel->Controls->Add(this->currentDate);
				this->topPanel->Controls->Add(this->threeDots);
				this->topPanel->Controls->Add(this->nextTaskLabel);
				this->topPanel->Controls->Add(this->currentDateLabel);
				this->topPanel->Controls->Add(this->allDoingsLabel);
				this->topPanel->Controls->Add(this->currentTaskLabel);
				this->topPanel->Controls->Add(this->searchIcon);
				this->topPanel->Controls->Add(this->searchForDoings);
				this->topPanel->Controls->Add(this->leaderplan);
				this->topPanel->Controls->Add(this->leaderplanIcon);
				this->topPanel->Dock = System::Windows::Forms::DockStyle::Top;
				this->topPanel->Location = System::Drawing::Point(0, 24);
				this->topPanel->Name = L"topPanel";
				this->topPanel->Size = System::Drawing::Size(1450, 62);
				this->topPanel->TabIndex = 0;
				// 
				// currentDoing
				// 
				this->currentDoing->AutoSize = true;
				this->currentDoing->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->currentDoing->ForeColor = System::Drawing::Color::White;
				this->currentDoing->Location = System::Drawing::Point(708, 13);
				this->currentDoing->Name = L"currentDoing";
				this->currentDoing->Size = System::Drawing::Size(49, 15);
				this->currentDoing->TabIndex = 15;
				this->currentDoing->Text = L"label1";
				this->currentDoing->Visible = false;
				// 
				// nextDoing
				// 
				this->nextDoing->AutoSize = true;
				this->nextDoing->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->nextDoing->ForeColor = System::Drawing::Color::White;
				this->nextDoing->Location = System::Drawing::Point(730, 30);
				this->nextDoing->Name = L"nextDoing";
				this->nextDoing->Size = System::Drawing::Size(49, 15);
				this->nextDoing->TabIndex = 14;
				this->nextDoing->Text = L"label1";
				this->nextDoing->Visible = false;
				// 
				// countOfDoingsToday
				// 
				this->countOfDoingsToday->AutoSize = true;
				this->countOfDoingsToday->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->countOfDoingsToday->ForeColor = System::Drawing::Color::White;
				this->countOfDoingsToday->Location = System::Drawing::Point(1180, 13);
				this->countOfDoingsToday->Name = L"countOfDoingsToday";
				this->countOfDoingsToday->Size = System::Drawing::Size(14, 15);
				this->countOfDoingsToday->TabIndex = 13;
				this->countOfDoingsToday->Text = L"0";
				// 
				// currentDate
				// 
				this->currentDate->AutoSize = true;
				this->currentDate->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->currentDate->ForeColor = System::Drawing::Color::White;
				this->currentDate->Location = System::Drawing::Point(1069, 30);
				this->currentDate->Name = L"currentDate";
				this->currentDate->Size = System::Drawing::Size(49, 15);
				this->currentDate->TabIndex = 12;
				this->currentDate->Text = L"label1";
				// 
				// threeDots
				// 
				this->threeDots->Cursor = System::Windows::Forms::Cursors::Hand;
				this->threeDots->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"threeDots.Image")));
				this->threeDots->Location = System::Drawing::Point(4, 9);
				this->threeDots->Name = L"threeDots";
				this->threeDots->Size = System::Drawing::Size(20, 47);
				this->threeDots->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->threeDots->TabIndex = 11;
				this->threeDots->TabStop = false;
				this->threeDots->Click += gcnew System::EventHandler(this, &MainForm::threeDots_Click);
				// 
				// nextTaskLabel
				// 
				this->nextTaskLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->nextTaskLabel->AutoSize = true;
				this->nextTaskLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->nextTaskLabel->Location = System::Drawing::Point(602, 29);
				this->nextTaskLabel->Name = L"nextTaskLabel";
				this->nextTaskLabel->Size = System::Drawing::Size(127, 17);
				this->nextTaskLabel->TabIndex = 7;
				this->nextTaskLabel->Text = L"следующая задача:";
				// 
				// currentDateLabel
				// 
				this->currentDateLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->currentDateLabel->AutoSize = true;
				this->currentDateLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->currentDateLabel->Location = System::Drawing::Point(979, 29);
				this->currentDateLabel->Name = L"currentDateLabel";
				this->currentDateLabel->Size = System::Drawing::Size(93, 17);
				this->currentDateLabel->TabIndex = 5;
				this->currentDateLabel->Text = L"текущая дата:";
				// 
				// allDoingsLabel
				// 
				this->allDoingsLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->allDoingsLabel->AutoSize = true;
				this->allDoingsLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->allDoingsLabel->Location = System::Drawing::Point(979, 12);
				this->allDoingsLabel->Name = L"allDoingsLabel";
				this->allDoingsLabel->Size = System::Drawing::Size(203, 17);
				this->allDoingsLabel->TabIndex = 2;
				this->allDoingsLabel->Text = L"количество всех дел на сегодня:";
				// 
				// currentTaskLabel
				// 
				this->currentTaskLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					| System::Windows::Forms::AnchorStyles::Right));
				this->currentTaskLabel->AutoSize = true;
				this->currentTaskLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->currentTaskLabel->Location = System::Drawing::Point(602, 12);
				this->currentTaskLabel->Name = L"currentTaskLabel";
				this->currentTaskLabel->Size = System::Drawing::Size(107, 17);
				this->currentTaskLabel->TabIndex = 6;
				this->currentTaskLabel->Text = L"текущая задача:";
				// 
				// hideProgram
				// 
				this->hideProgram->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				this->hideProgram->BackColor = System::Drawing::Color::White;
				this->hideProgram->Cursor = System::Windows::Forms::Cursors::Hand;
				this->hideProgram->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hideProgram.Image")));
				this->hideProgram->Location = System::Drawing::Point(1373, -1);
				this->hideProgram->Name = L"hideProgram";
				this->hideProgram->Size = System::Drawing::Size(18, 23);
				this->hideProgram->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->hideProgram->TabIndex = 10;
				this->hideProgram->TabStop = false;
				this->hideProgram->Click += gcnew System::EventHandler(this, &MainForm::hideProgram_Click);
				// 
				// minimizeWindow
				// 
				this->minimizeWindow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				this->minimizeWindow->BackColor = System::Drawing::Color::White;
				this->minimizeWindow->Cursor = System::Windows::Forms::Cursors::Hand;
				this->minimizeWindow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minimizeWindow.Image")));
				this->minimizeWindow->Location = System::Drawing::Point(1393, -1);
				this->minimizeWindow->Name = L"minimizeWindow";
				this->minimizeWindow->Size = System::Drawing::Size(23, 23);
				this->minimizeWindow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->minimizeWindow->TabIndex = 9;
				this->minimizeWindow->TabStop = false;
				this->minimizeWindow->Visible = false;
				this->minimizeWindow->Click += gcnew System::EventHandler(this, &MainForm::minimizeWindow_Click);
				// 
				// closeProgram
				// 
				this->closeProgram->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				this->closeProgram->BackColor = System::Drawing::Color::White;
				this->closeProgram->Cursor = System::Windows::Forms::Cursors::Hand;
				this->closeProgram->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeProgram.Image")));
				this->closeProgram->Location = System::Drawing::Point(1415, -6);
				this->closeProgram->Name = L"closeProgram";
				this->closeProgram->Size = System::Drawing::Size(24, 30);
				this->closeProgram->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->closeProgram->TabIndex = 8;
				this->closeProgram->TabStop = false;
				this->closeProgram->Click += gcnew System::EventHandler(this, &MainForm::closeProgram_Click);
				// 
				// panel5
				// 
				this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left));
				this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->panel5->Controls->Add(this->panel6);
				this->panel5->Location = System::Drawing::Point(6, 12);
				this->panel5->Name = L"panel5";
				this->panel5->Size = System::Drawing::Size(299, 615);
				this->panel5->TabIndex = 5;
				// 
				// panel6
				// 
				this->panel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left));
				this->panel6->BackColor = System::Drawing::SystemColors::HotTrack;
				this->panel6->Controls->Add(this->isNothingLabel);
				this->panel6->Controls->Add(this->doneList);
				this->panel6->Location = System::Drawing::Point(16, 16);
				this->panel6->Name = L"panel6";
				this->panel6->Size = System::Drawing::Size(271, 576);
				this->panel6->TabIndex = 6;
				// 
				// isNothingLabel
				// 
				this->isNothingLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
				this->isNothingLabel->AutoSize = true;
				this->isNothingLabel->BackColor = System::Drawing::Color::CornflowerBlue;
				this->isNothingLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(149)));
				this->isNothingLabel->Location = System::Drawing::Point(42, 250);
				this->isNothingLabel->Name = L"isNothingLabel";
				this->isNothingLabel->Size = System::Drawing::Size(191, 17);
				this->isNothingLabel->TabIndex = 22;
				this->isNothingLabel->Text = L"вы пока ничего не сделали.";
				// 
				// doneList
				// 
				this->doneList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left));
				this->doneList->BackColor = System::Drawing::Color::CornflowerBlue;
				this->doneList->Cursor = System::Windows::Forms::Cursors::Default;
				this->doneList->ForeColor = System::Drawing::SystemColors::Control;
				this->doneList->Location = System::Drawing::Point(0, 0);
				this->doneList->Name = L"doneList";
				this->doneList->ReadOnly = true;
				this->doneList->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
				this->doneList->Size = System::Drawing::Size(271, 576);
				this->doneList->TabIndex = 0;
				this->doneList->Text = L"";
				// 
				// panel1
				// 
				this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left));
				this->panel1->BackColor = System::Drawing::Color::CornflowerBlue;
				this->panel1->Controls->Add(this->amountOfDoings);
				this->panel1->Controls->Add(this->amountOfDoingsLabel);
				this->panel1->Controls->Add(this->panel2);
				this->panel1->Location = System::Drawing::Point(6, 12);
				this->panel1->Name = L"panel1";
				this->panel1->Size = System::Drawing::Size(299, 616);
				this->panel1->TabIndex = 5;
				// 
				// amountOfDoings
				// 
				this->amountOfDoings->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
				this->amountOfDoings->AutoSize = true;
				this->amountOfDoings->BackColor = System::Drawing::Color::CornflowerBlue;
				this->amountOfDoings->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(234)),
					static_cast<System::Int32>(static_cast<System::Byte>(230)));
				this->amountOfDoings->Location = System::Drawing::Point(123, 599);
				this->amountOfDoings->Name = L"amountOfDoings";
				this->amountOfDoings->Size = System::Drawing::Size(15, 17);
				this->amountOfDoings->TabIndex = 28;
				this->amountOfDoings->Text = L"0";
				// 
				// amountOfDoingsLabel
				// 
				this->amountOfDoingsLabel->AutoSize = true;
				this->amountOfDoingsLabel->Dock = System::Windows::Forms::DockStyle::Bottom;
				this->amountOfDoingsLabel->ForeColor = System::Drawing::SystemColors::Control;
				this->amountOfDoingsLabel->Location = System::Drawing::Point(0, 599);
				this->amountOfDoingsLabel->Name = L"amountOfDoingsLabel";
				this->amountOfDoingsLabel->Size = System::Drawing::Size(127, 17);
				this->amountOfDoingsLabel->TabIndex = 27;
				this->amountOfDoingsLabel->Text = L"количество задач:";
				// 
				// panel2
				// 
				this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left));
				this->panel2->BackColor = System::Drawing::SystemColors::HotTrack;
				this->panel2->Controls->Add(this->listIsEmptyLabel);
				this->panel2->Controls->Add(this->doingsList);
				this->panel2->Location = System::Drawing::Point(16, 16);
				this->panel2->Name = L"panel2";
				this->panel2->Size = System::Drawing::Size(271, 577);
				this->panel2->TabIndex = 6;
				// 
				// listIsEmptyLabel
				// 
				this->listIsEmptyLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
				this->listIsEmptyLabel->AutoSize = true;
				this->listIsEmptyLabel->ForeColor = System::Drawing::SystemColors::ActiveCaption;
				this->listIsEmptyLabel->Location = System::Drawing::Point(29, 250);
				this->listIsEmptyLabel->Name = L"listIsEmptyLabel";
				this->listIsEmptyLabel->Size = System::Drawing::Size(210, 17);
				this->listIsEmptyLabel->TabIndex = 2;
				this->listIsEmptyLabel->Text = L"ваш список дел пока что пуст.";
				// 
				// doingsList
				// 
				this->doingsList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left));
				this->doingsList->BackColor = System::Drawing::SystemColors::HotTrack;
				this->doingsList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
				this->doingsList->ForeColor = System::Drawing::SystemColors::Control;
				this->doingsList->FullRowSelect = true;
				this->doingsList->HideSelection = false;
				this->doingsList->LabelEdit = true;
				this->doingsList->Location = System::Drawing::Point(0, -2);
				this->doingsList->MultiSelect = false;
				this->doingsList->Name = L"doingsList";
				this->doingsList->Size = System::Drawing::Size(271, 578);
				this->doingsList->TabIndex = 20;
				this->doingsList->TabStop = false;
				this->doingsList->UseCompatibleStateImageBehavior = false;
				this->doingsList->View = System::Windows::Forms::View::Tile;
				this->doingsList->ItemMouseHover += gcnew System::Windows::Forms::ListViewItemMouseHoverEventHandler(this, &MainForm::doingsList_ItemMouseHover);
				this->doingsList->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &MainForm::doingsList_ItemSelectionChanged);
				this->doingsList->Click += gcnew System::EventHandler(this, &MainForm::doingsList_Click);
				// 
				// columnHeader1
				// 
				this->columnHeader1->Text = L"Название задачи";
				this->columnHeader1->Width = 125;
				// 
				// columnHeader2
				// 
				this->columnHeader2->Text = L"Описание";
				this->columnHeader2->Width = 141;
				// 
				// panel3
				// 
				this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left));
				this->panel3->BackColor = System::Drawing::SystemColors::HotTrack;
				this->panel3->Controls->Add(this->isAnythingTodayLabel);
				this->panel3->Controls->Add(this->doingsTodayList);
				this->panel3->Location = System::Drawing::Point(7, 14);
				this->panel3->Name = L"panel3";
				this->panel3->Size = System::Drawing::Size(299, 615);
				this->panel3->TabIndex = 5;
				// 
				// isAnythingTodayLabel
				// 
				this->isAnythingTodayLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
				this->isAnythingTodayLabel->AutoSize = true;
				this->isAnythingTodayLabel->BackColor = System::Drawing::Color::CornflowerBlue;
				this->isAnythingTodayLabel->ForeColor = System::Drawing::SystemColors::HotTrack;
				this->isAnythingTodayLabel->Location = System::Drawing::Point(56, 265);
				this->isAnythingTodayLabel->Name = L"isAnythingTodayLabel";
				this->isAnythingTodayLabel->Size = System::Drawing::Size(194, 17);
				this->isAnythingTodayLabel->TabIndex = 21;
				this->isAnythingTodayLabel->Text = L"на сегодня нет никаких дел.";
				// 
				// doingsTodayList
				// 
				this->doingsTodayList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left));
				this->doingsTodayList->BackColor = System::Drawing::Color::CornflowerBlue;
				this->doingsTodayList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
					this->columnHeader3,
						this->columnHeader4
				});
				this->doingsTodayList->ForeColor = System::Drawing::SystemColors::Control;
				this->doingsTodayList->FullRowSelect = true;
				this->doingsTodayList->HideSelection = false;
				this->doingsTodayList->Location = System::Drawing::Point(16, 16);
				this->doingsTodayList->MultiSelect = false;
				this->doingsTodayList->Name = L"doingsTodayList";
				this->doingsTodayList->Size = System::Drawing::Size(271, 576);
				this->doingsTodayList->TabIndex = 21;
				this->doingsTodayList->TabStop = false;
				this->doingsTodayList->UseCompatibleStateImageBehavior = false;
				this->doingsTodayList->View = System::Windows::Forms::View::Tile;
				this->doingsTodayList->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &MainForm::doingsTodayList_ItemSelectionChanged);
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
				// separator_3
				// 
				this->separator_3->BackColor = System::Drawing::Color::Transparent;
				this->separator_3->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
					static_cast<System::Int32>(static_cast<System::Byte>(105)));
				this->separator_3->LineThickness = 1;
				this->separator_3->Location = System::Drawing::Point(1861, 199);
				this->separator_3->Margin = System::Windows::Forms::Padding(12);
				this->separator_3->Name = L"separator_3";
				this->separator_3->Size = System::Drawing::Size(481, 17);
				this->separator_3->TabIndex = 8;
				this->separator_3->Transparency = 255;
				this->separator_3->Vertical = false;
				// 
				// listOfAllDoingsLabel
				// 
				this->listOfAllDoingsLabel->AutoSize = true;
				this->listOfAllDoingsLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->listOfAllDoingsLabel->ForeColor = System::Drawing::SystemColors::Control;
				this->listOfAllDoingsLabel->Location = System::Drawing::Point(365, 99);
				this->listOfAllDoingsLabel->Name = L"listOfAllDoingsLabel";
				this->listOfAllDoingsLabel->Size = System::Drawing::Size(152, 20);
				this->listOfAllDoingsLabel->TabIndex = 9;
				this->listOfAllDoingsLabel->Text = L"СПИСОК ВСЕХ ДЕЛ";
				// 
				// doTodayLabel
				// 
				this->doTodayLabel->AutoSize = true;
				this->doTodayLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->doTodayLabel->ForeColor = System::Drawing::SystemColors::Control;
				this->doTodayLabel->Location = System::Drawing::Point(781, 98);
				this->doTodayLabel->Name = L"doTodayLabel";
				this->doTodayLabel->Size = System::Drawing::Size(150, 20);
				this->doTodayLabel->TabIndex = 10;
				this->doTodayLabel->Text = L"СДЕЛАТЬ СЕГОДНЯ";
				// 
				// alreadyDoneLabel
				// 
				this->alreadyDoneLabel->AutoSize = true;
				this->alreadyDoneLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->alreadyDoneLabel->ForeColor = System::Drawing::SystemColors::Control;
				this->alreadyDoneLabel->Location = System::Drawing::Point(1203, 99);
				this->alreadyDoneLabel->Name = L"alreadyDoneLabel";
				this->alreadyDoneLabel->Size = System::Drawing::Size(85, 20);
				this->alreadyDoneLabel->TabIndex = 11;
				this->alreadyDoneLabel->Text = L"СДЕЛАНО";
				// 
				// donePictureBox
				// 
				this->donePictureBox->Cursor = System::Windows::Forms::Cursors::Hand;
				this->donePictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"donePictureBox.Image")));
				this->donePictureBox->Location = System::Drawing::Point(1284, 98);
				this->donePictureBox->Name = L"donePictureBox";
				this->donePictureBox->Size = System::Drawing::Size(22, 21);
				this->donePictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->donePictureBox->TabIndex = 12;
				this->donePictureBox->TabStop = false;
				this->donePictureBox->Click += gcnew System::EventHandler(this, &MainForm::donePictureBox_Click);
				// 
				// menuOptions
				// 
				this->menuOptions->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					this->ФайлToolStripMenuItem,
						this->разработчикToolStripMenuItem, this->разработчикToolStripMenuItem1
				});
				this->menuOptions->Location = System::Drawing::Point(0, 0);
				this->menuOptions->Name = L"menuOptions";
				this->menuOptions->Size = System::Drawing::Size(1450, 24);
				this->menuOptions->TabIndex = 13;
				this->menuOptions->Text = L"menuStrip1";
				// 
				// ФайлToolStripMenuItem
				// 
				this->ФайлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					this->открытьToolStripMenuItem,
						this->сохранитьToolStripMenuItem, this->сохранитьБезДедлайнаToolStripMenuItem
				});
				this->ФайлToolStripMenuItem->Name = L"ФайлToolStripMenuItem";
				this->ФайлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
				this->ФайлToolStripMenuItem->Text = L"Файл";
				// 
				// открытьToolStripMenuItem
				// 
				this->открытьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					this->docxToolStripMenuItem,
						this->txtToolStripMenuItem, this->сделаноToolStripMenuItem
				});
				this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
				this->открытьToolStripMenuItem->Size = System::Drawing::Size(207, 22);
				this->открытьToolStripMenuItem->Text = L"Загрузить задачи в...";
				// 
				// docxToolStripMenuItem
				// 
				this->docxToolStripMenuItem->Name = L"docxToolStripMenuItem";
				this->docxToolStripMenuItem->Size = System::Drawing::Size(164, 22);
				this->docxToolStripMenuItem->Text = L"Список всех дел";
				// 
				// txtToolStripMenuItem
				// 
				this->txtToolStripMenuItem->Name = L"txtToolStripMenuItem";
				this->txtToolStripMenuItem->Size = System::Drawing::Size(164, 22);
				this->txtToolStripMenuItem->Text = L"Сделать сегодня";
				// 
				// сделаноToolStripMenuItem
				// 
				this->сделаноToolStripMenuItem->Name = L"сделаноToolStripMenuItem";
				this->сделаноToolStripMenuItem->Size = System::Drawing::Size(164, 22);
				this->сделаноToolStripMenuItem->Text = L"Сделано";
				// 
				// сохранитьToolStripMenuItem
				// 
				this->сохранитьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					this->списокВсехДелToolStripMenuItem,
						this->сделатьСегодняToolStripMenuItem
				});
				this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
				this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(207, 22);
				this->сохранитьToolStripMenuItem->Text = L"Сохранить с дедлайном";
				// 
				// списокВсехДелToolStripMenuItem
				// 
				this->списокВсехДелToolStripMenuItem->Name = L"списокВсехДелToolStripMenuItem";
				this->списокВсехДелToolStripMenuItem->Size = System::Drawing::Size(164, 22);
				this->списокВсехДелToolStripMenuItem->Text = L"Список всех дел";
				this->списокВсехДелToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::списокВсехДелToolStripMenuItem_Click);
				// 
				// сделатьСегодняToolStripMenuItem
				// 
				this->сделатьСегодняToolStripMenuItem->Name = L"сделатьСегодняToolStripMenuItem";
				this->сделатьСегодняToolStripMenuItem->Size = System::Drawing::Size(164, 22);
				this->сделатьСегодняToolStripMenuItem->Text = L"Сделать сегодня";
				this->сделатьСегодняToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::сделатьСегодняToolStripMenuItem_Click);
				// 
				// сохранитьБезДедлайнаToolStripMenuItem
				// 
				this->сохранитьБезДедлайнаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					this->списокВсехДелToolStripMenuItem1,
						this->сделатьСегодняToolStripMenuItem1
				});
				this->сохранитьБезДедлайнаToolStripMenuItem->Name = L"сохранитьБезДедлайнаToolStripMenuItem";
				this->сохранитьБезДедлайнаToolStripMenuItem->Size = System::Drawing::Size(207, 22);
				this->сохранитьБезДедлайнаToolStripMenuItem->Text = L"Сохранить без дедлайна";
				// 
				// списокВсехДелToolStripMenuItem1
				// 
				this->списокВсехДелToolStripMenuItem1->Name = L"списокВсехДелToolStripMenuItem1";
				this->списокВсехДелToolStripMenuItem1->Size = System::Drawing::Size(164, 22);
				this->списокВсехДелToolStripMenuItem1->Text = L"Список всех дел";
				this->списокВсехДелToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::списокВсехДелToolStripMenuItem1_Click);
				// 
				// сделатьСегодняToolStripMenuItem1
				// 
				this->сделатьСегодняToolStripMenuItem1->Name = L"сделатьСегодняToolStripMenuItem1";
				this->сделатьСегодняToolStripMenuItem1->Size = System::Drawing::Size(164, 22);
				this->сделатьСегодняToolStripMenuItem1->Text = L"Сделать сегодня";
				this->сделатьСегодняToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::сделатьСегодняToolStripMenuItem1_Click);
				// 
				// разработчикToolStripMenuItem
				// 
				this->разработчикToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					this->темыToolStripMenuItem,
						this->восстановитToolStripMenuItem
				});
				this->разработчикToolStripMenuItem->Name = L"разработчикToolStripMenuItem";
				this->разработчикToolStripMenuItem->Size = System::Drawing::Size(56, 20);
				this->разработчикToolStripMenuItem->Text = L"Опции";
				// 
				// темыToolStripMenuItem
				// 
				this->темыToolStripMenuItem->Name = L"темыToolStripMenuItem";
				this->темыToolStripMenuItem->Size = System::Drawing::Size(149, 22);
				this->темыToolStripMenuItem->Text = L"Окно";
				this->темыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::темыToolStripMenuItem_Click);
				// 
				// восстановитToolStripMenuItem
				// 
				this->восстановитToolStripMenuItem->Name = L"восстановитToolStripMenuItem";
				this->восстановитToolStripMenuItem->Size = System::Drawing::Size(149, 22);
				this->восстановитToolStripMenuItem->Text = L"Восстановить";
				this->восстановитToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::восстановитToolStripMenuItem_Click);
				// 
				// разработчикToolStripMenuItem1
				// 
				this->разработчикToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					this->справкаToolStripMenuItem,
						this->навигацияToolStripMenuItem, this->оРазработчикеToolStripMenuItem
				});
				this->разработчикToolStripMenuItem1->Name = L"разработчикToolStripMenuItem1";
				this->разработчикToolStripMenuItem1->Size = System::Drawing::Size(93, 20);
				this->разработчикToolStripMenuItem1->Text = L"Информация";
				// 
				// справкаToolStripMenuItem
				// 
				this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
				this->справкаToolStripMenuItem->Size = System::Drawing::Size(162, 22);
				this->справкаToolStripMenuItem->Text = L"Справка";
				this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::справкаToolStripMenuItem_Click);
				// 
				// навигацияToolStripMenuItem
				// 
				this->навигацияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
					this->доскаСписковДелToolStripMenuItem,
						this->списокЦелейToolStripMenuItem, this->проектыToolStripMenuItem, this->календарьToolStripMenuItem, this->статистикаToolStripMenuItem,
						this->подведениеИтоговToolStripMenuItem, this->калорииИВесToolStripMenuItem, this->заметкиToolStripMenuItem, this->напоминанияToolStripMenuItem
				});
				this->навигацияToolStripMenuItem->Name = L"навигацияToolStripMenuItem";
				this->навигацияToolStripMenuItem->Size = System::Drawing::Size(162, 22);
				this->навигацияToolStripMenuItem->Text = L"Навигация";
				// 
				// доскаСписковДелToolStripMenuItem
				// 
				this->доскаСписковДелToolStripMenuItem->Name = L"доскаСписковДелToolStripMenuItem";
				this->доскаСписковДелToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->доскаСписковДелToolStripMenuItem->Text = L"Доска списков дел";
				// 
				// списокЦелейToolStripMenuItem
				// 
				this->списокЦелейToolStripMenuItem->Name = L"списокЦелейToolStripMenuItem";
				this->списокЦелейToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->списокЦелейToolStripMenuItem->Text = L"Список целей";
				// 
				// проектыToolStripMenuItem
				// 
				this->проектыToolStripMenuItem->Name = L"проектыToolStripMenuItem";
				this->проектыToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->проектыToolStripMenuItem->Text = L"Проекты";
				// 
				// календарьToolStripMenuItem
				// 
				this->календарьToolStripMenuItem->Name = L"календарьToolStripMenuItem";
				this->календарьToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->календарьToolStripMenuItem->Text = L"Календарь";
				// 
				// статистикаToolStripMenuItem
				// 
				this->статистикаToolStripMenuItem->Name = L"статистикаToolStripMenuItem";
				this->статистикаToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->статистикаToolStripMenuItem->Text = L"Статистика";
				// 
				// подведениеИтоговToolStripMenuItem
				// 
				this->подведениеИтоговToolStripMenuItem->Name = L"подведениеИтоговToolStripMenuItem";
				this->подведениеИтоговToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->подведениеИтоговToolStripMenuItem->Text = L"Подведение итогов";
				// 
				// калорииИВесToolStripMenuItem
				// 
				this->калорииИВесToolStripMenuItem->Name = L"калорииИВесToolStripMenuItem";
				this->калорииИВесToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->калорииИВесToolStripMenuItem->Text = L"Калории и вес";
				// 
				// заметкиToolStripMenuItem
				// 
				this->заметкиToolStripMenuItem->Name = L"заметкиToolStripMenuItem";
				this->заметкиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->заметкиToolStripMenuItem->Text = L"Заметки";
				// 
				// напоминанияToolStripMenuItem
				// 
				this->напоминанияToolStripMenuItem->Name = L"напоминанияToolStripMenuItem";
				this->напоминанияToolStripMenuItem->Size = System::Drawing::Size(180, 22);
				this->напоминанияToolStripMenuItem->Text = L"Напоминания";
				// 
				// оРазработчикеToolStripMenuItem
				// 
				this->оРазработчикеToolStripMenuItem->Name = L"оРазработчикеToolStripMenuItem";
				this->оРазработчикеToolStripMenuItem->Size = System::Drawing::Size(162, 22);
				this->оРазработчикеToolStripMenuItem->Text = L"О разработчике";
				this->оРазработчикеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::оРазработчикеToolStripMenuItem_Click);
				// 
				// maximizeWindow
				// 
				this->maximizeWindow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				this->maximizeWindow->BackColor = System::Drawing::Color::White;
				this->maximizeWindow->Cursor = System::Windows::Forms::Cursors::Hand;
				this->maximizeWindow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"maximizeWindow.Image")));
				this->maximizeWindow->Location = System::Drawing::Point(1393, -1);
				this->maximizeWindow->Name = L"maximizeWindow";
				this->maximizeWindow->Size = System::Drawing::Size(23, 23);
				this->maximizeWindow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->maximizeWindow->TabIndex = 14;
				this->maximizeWindow->TabStop = false;
				this->maximizeWindow->Click += gcnew System::EventHandler(this, &MainForm::maximizeWindow_Click);
				// 
				// moverTopPanel
				// 
				this->moverTopPanel->Fixed = true;
				this->moverTopPanel->Horizontal = true;
				this->moverTopPanel->TargetControl = this->topPanel;
				this->moverTopPanel->Vertical = true;
				// 
				// moverMenu
				// 
				this->moverMenu->Fixed = true;
				this->moverMenu->Horizontal = true;
				this->moverMenu->TargetControl = this->menuOptions;
				this->moverMenu->Vertical = true;
				// 
				// firstList
				// 
				this->firstList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left));
				this->firstList->Controls->Add(this->panel1);
				this->firstList->Location = System::Drawing::Point(304, 122);
				this->firstList->Name = L"firstList";
				this->firstList->Size = System::Drawing::Size(312, 634);
				this->firstList->TabIndex = 15;
				this->firstList->TabStop = false;
				// 
				// addNewDoingButton
				// 
				this->addNewDoingButton->Cursor = System::Windows::Forms::Cursors::Hand;
				this->addNewDoingButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addNewDoingButton.Image")));
				this->addNewDoingButton->Location = System::Drawing::Point(523, 98);
				this->addNewDoingButton->Name = L"addNewDoingButton";
				this->addNewDoingButton->Size = System::Drawing::Size(22, 21);
				this->addNewDoingButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->addNewDoingButton->TabIndex = 16;
				this->addNewDoingButton->TabStop = false;
				this->addNewDoingButton->Click += gcnew System::EventHandler(this, &MainForm::addNewDoingButton_Click);
				// 
				// secondList
				// 
				this->secondList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left));
				this->secondList->Controls->Add(this->panel3);
				this->secondList->Controls->Add(this->sortingListButton2);
				this->secondList->Location = System::Drawing::Point(704, 121);
				this->secondList->Name = L"secondList";
				this->secondList->Size = System::Drawing::Size(312, 634);
				this->secondList->TabIndex = 15;
				this->secondList->TabStop = false;
				// 
				// sortingListButton2
				// 
				this->sortingListButton2->Cursor = System::Windows::Forms::Cursors::Hand;
				this->sortingListButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sortingListButton2.Image")));
				this->sortingListButton2->Location = System::Drawing::Point(785, 100);
				this->sortingListButton2->Name = L"sortingListButton2";
				this->sortingListButton2->Size = System::Drawing::Size(22, 21);
				this->sortingListButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->sortingListButton2->TabIndex = 19;
				this->sortingListButton2->TabStop = false;
				this->sortingListButton2->Visible = false;
				// 
				// thirdList
				// 
				this->thirdList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left));
				this->thirdList->Controls->Add(this->panel5);
				this->thirdList->Location = System::Drawing::Point(1100, 122);
				this->thirdList->Name = L"thirdList";
				this->thirdList->Size = System::Drawing::Size(312, 634);
				this->thirdList->TabIndex = 15;
				this->thirdList->TabStop = false;
				// 
				// sortingListButton
				// 
				this->sortingListButton->Cursor = System::Windows::Forms::Cursors::Hand;
				this->sortingListButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sortingListButton.Image")));
				this->sortingListButton->Location = System::Drawing::Point(927, 97);
				this->sortingListButton->Name = L"sortingListButton";
				this->sortingListButton->Size = System::Drawing::Size(22, 21);
				this->sortingListButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->sortingListButton->TabIndex = 17;
				this->sortingListButton->TabStop = false;
				this->sortingListButton->Click += gcnew System::EventHandler(this, &MainForm::sortingListButton_Click);
				// 
				// sortingBox
				// 
				this->sortingBox->Controls->Add(this->byDefault);
				this->sortingBox->Controls->Add(this->byUserChoice);
				this->sortingBox->Controls->Add(this->byImportance);
				this->sortingBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
				this->sortingBox->Location = System::Drawing::Point(955, 86);
				this->sortingBox->Name = L"sortingBox";
				this->sortingBox->Size = System::Drawing::Size(140, 86);
				this->sortingBox->TabIndex = 18;
				this->sortingBox->TabStop = false;
				this->sortingBox->Text = L"Сортировать по";
				this->sortingBox->Visible = false;
				// 
				// byDefault
				// 
				this->byDefault->AutoSize = true;
				this->byDefault->Checked = true;
				this->byDefault->Cursor = System::Windows::Forms::Cursors::Hand;
				this->byDefault->Location = System::Drawing::Point(3, 62);
				this->byDefault->Name = L"byDefault";
				this->byDefault->Size = System::Drawing::Size(122, 21);
				this->byDefault->TabIndex = 2;
				this->byDefault->TabStop = true;
				this->byDefault->Text = L"по умолчанию";
				this->byDefault->UseVisualStyleBackColor = true;
				// 
				// byUserChoice
				// 
				this->byUserChoice->AutoSize = true;
				this->byUserChoice->Cursor = System::Windows::Forms::Cursors::Hand;
				this->byUserChoice->Location = System::Drawing::Point(3, 41);
				this->byUserChoice->Name = L"byUserChoice";
				this->byUserChoice->Size = System::Drawing::Size(99, 21);
				this->byUserChoice->TabIndex = 1;
				this->byUserChoice->Text = L"ваш выбор";
				this->byUserChoice->UseVisualStyleBackColor = true;
				// 
				// byImportance
				// 
				this->byImportance->AutoSize = true;
				this->byImportance->Cursor = System::Windows::Forms::Cursors::Hand;
				this->byImportance->Location = System::Drawing::Point(3, 19);
				this->byImportance->Name = L"byImportance";
				this->byImportance->Size = System::Drawing::Size(109, 21);
				this->byImportance->TabIndex = 0;
				this->byImportance->Text = L"по важности";
				this->byImportance->UseVisualStyleBackColor = true;
				// 
				// sortingForDoingsListButton
				// 
				this->sortingForDoingsListButton->Cursor = System::Windows::Forms::Cursors::Hand;
				this->sortingForDoingsListButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sortingForDoingsListButton.Image")));
				this->sortingForDoingsListButton->Location = System::Drawing::Point(551, 98);
				this->sortingForDoingsListButton->Name = L"sortingForDoingsListButton";
				this->sortingForDoingsListButton->Size = System::Drawing::Size(22, 21);
				this->sortingForDoingsListButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->sortingForDoingsListButton->TabIndex = 20;
				this->sortingForDoingsListButton->TabStop = false;
				this->sortingForDoingsListButton->Click += gcnew System::EventHandler(this, &MainForm::sortingForDoingsListButton_Click);
				// 
				// sortingForDoingsListBox
				// 
				this->sortingForDoingsListBox->Controls->Add(this->byDatesChoice);
				this->sortingForDoingsListBox->Controls->Add(this->byDefaultDL);
				this->sortingForDoingsListBox->Controls->Add(this->byUserChoiceDL);
				this->sortingForDoingsListBox->Controls->Add(this->byImportanceDL);
				this->sortingForDoingsListBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
				this->sortingForDoingsListBox->Location = System::Drawing::Point(579, 86);
				this->sortingForDoingsListBox->Name = L"sortingForDoingsListBox";
				this->sortingForDoingsListBox->Size = System::Drawing::Size(140, 109);
				this->sortingForDoingsListBox->TabIndex = 19;
				this->sortingForDoingsListBox->TabStop = false;
				this->sortingForDoingsListBox->Text = L"Сортировать по";
				this->sortingForDoingsListBox->Visible = false;
				// 
				// byDatesChoice
				// 
				this->byDatesChoice->AutoSize = true;
				this->byDatesChoice->Cursor = System::Windows::Forms::Cursors::Hand;
				this->byDatesChoice->Location = System::Drawing::Point(3, 62);
				this->byDatesChoice->Name = L"byDatesChoice";
				this->byDatesChoice->Size = System::Drawing::Size(89, 21);
				this->byDatesChoice->TabIndex = 3;
				this->byDatesChoice->Text = L"по датам";
				this->byDatesChoice->UseVisualStyleBackColor = true;
				// 
				// byDefaultDL
				// 
				this->byDefaultDL->AutoSize = true;
				this->byDefaultDL->Checked = true;
				this->byDefaultDL->Cursor = System::Windows::Forms::Cursors::Hand;
				this->byDefaultDL->Location = System::Drawing::Point(3, 82);
				this->byDefaultDL->Name = L"byDefaultDL";
				this->byDefaultDL->Size = System::Drawing::Size(122, 21);
				this->byDefaultDL->TabIndex = 2;
				this->byDefaultDL->TabStop = true;
				this->byDefaultDL->Text = L"по умолчанию";
				this->byDefaultDL->UseVisualStyleBackColor = true;
				// 
				// byUserChoiceDL
				// 
				this->byUserChoiceDL->AutoSize = true;
				this->byUserChoiceDL->Cursor = System::Windows::Forms::Cursors::Hand;
				this->byUserChoiceDL->Location = System::Drawing::Point(3, 41);
				this->byUserChoiceDL->Name = L"byUserChoiceDL";
				this->byUserChoiceDL->Size = System::Drawing::Size(99, 21);
				this->byUserChoiceDL->TabIndex = 1;
				this->byUserChoiceDL->Text = L"ваш выбор";
				this->byUserChoiceDL->UseVisualStyleBackColor = true;
				// 
				// byImportanceDL
				// 
				this->byImportanceDL->AutoSize = true;
				this->byImportanceDL->Cursor = System::Windows::Forms::Cursors::Hand;
				this->byImportanceDL->Location = System::Drawing::Point(3, 19);
				this->byImportanceDL->Name = L"byImportanceDL";
				this->byImportanceDL->Size = System::Drawing::Size(109, 21);
				this->byImportanceDL->TabIndex = 0;
				this->byImportanceDL->Text = L"по важности";
				this->byImportanceDL->UseVisualStyleBackColor = true;
				// 
				// sortingForDoingsListButton2
				// 
				this->sortingForDoingsListButton2->Cursor = System::Windows::Forms::Cursors::Hand;
				this->sortingForDoingsListButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sortingForDoingsListButton2.Image")));
				this->sortingForDoingsListButton2->Location = System::Drawing::Point(551, 98);
				this->sortingForDoingsListButton2->Name = L"sortingForDoingsListButton2";
				this->sortingForDoingsListButton2->Size = System::Drawing::Size(22, 21);
				this->sortingForDoingsListButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->sortingForDoingsListButton2->TabIndex = 21;
				this->sortingForDoingsListButton2->TabStop = false;
				this->sortingForDoingsListButton2->Visible = false;
				this->sortingForDoingsListButton2->Click += gcnew System::EventHandler(this, &MainForm::sortingForDoingsListButton2_Click);
				// 
				// sortingListButton_2
				// 
				this->sortingListButton_2->Cursor = System::Windows::Forms::Cursors::Hand;
				this->sortingListButton_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sortingListButton_2.Image")));
				this->sortingListButton_2->Location = System::Drawing::Point(927, 97);
				this->sortingListButton_2->Name = L"sortingListButton_2";
				this->sortingListButton_2->Size = System::Drawing::Size(22, 21);
				this->sortingListButton_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->sortingListButton_2->TabIndex = 22;
				this->sortingListButton_2->TabStop = false;
				this->sortingListButton_2->Visible = false;
				this->sortingListButton_2->Click += gcnew System::EventHandler(this, &MainForm::sortingListButton_2_Click);
				// 
				// toRight
				// 
				this->toRight->Cursor = System::Windows::Forms::Cursors::Hand;
				this->toRight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toRight.Image")));
				this->toRight->Location = System::Drawing::Point(641, 382);
				this->toRight->Name = L"toRight";
				this->toRight->Size = System::Drawing::Size(35, 35);
				this->toRight->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->toRight->TabIndex = 23;
				this->toRight->TabStop = false;
				this->toRight->Click += gcnew System::EventHandler(this, &MainForm::toRight_Click);
				// 
				// toLeft
				// 
				this->toLeft->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left));
				this->toLeft->Cursor = System::Windows::Forms::Cursors::Hand;
				this->toLeft->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toLeft.Image")));
				this->toLeft->Location = System::Drawing::Point(641, 443);
				this->toLeft->Name = L"toLeft";
				this->toLeft->Size = System::Drawing::Size(35, 35);
				this->toLeft->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->toLeft->TabIndex = 24;
				this->toLeft->TabStop = false;
				this->toLeft->Click += gcnew System::EventHandler(this, &MainForm::toLeft_Click);
				// 
				// toDelete
				// 
				this->toDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->toDelete->Cursor = System::Windows::Forms::Cursors::Hand;
				this->toDelete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toDelete.Image")));
				this->toDelete->Location = System::Drawing::Point(641, 691);
				this->toDelete->Name = L"toDelete";
				this->toDelete->Size = System::Drawing::Size(35, 35);
				this->toDelete->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->toDelete->TabIndex = 25;
				this->toDelete->TabStop = false;
				this->toDelete->Visible = false;
				this->toDelete->Click += gcnew System::EventHandler(this, &MainForm::toDelete_Click);
				// 
				// toDeleteInactive
				// 
				this->toDeleteInactive->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				this->toDeleteInactive->Cursor = System::Windows::Forms::Cursors::Arrow;
				this->toDeleteInactive->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toDeleteInactive.Image")));
				this->toDeleteInactive->Location = System::Drawing::Point(641, 691);
				this->toDeleteInactive->Name = L"toDeleteInactive";
				this->toDeleteInactive->Size = System::Drawing::Size(35, 35);
				this->toDeleteInactive->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->toDeleteInactive->TabIndex = 26;
				this->toDeleteInactive->TabStop = false;
				// 
				// doneButton
				// 
				this->doneButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
					| System::Windows::Forms::AnchorStyles::Left));
				this->doneButton->Cursor = System::Windows::Forms::Cursors::Hand;
				this->doneButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"doneButton.Image")));
				this->doneButton->Location = System::Drawing::Point(1030, 400);
				this->doneButton->Name = L"doneButton";
				this->doneButton->Size = System::Drawing::Size(55, 54);
				this->doneButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->doneButton->TabIndex = 27;
				this->doneButton->TabStop = false;
				this->doneButton->Click += gcnew System::EventHandler(this, &MainForm::doneButton_Click);
				// 
				// doneOptions
				// 
				this->doneOptions->Controls->Add(this->saveDoings);
				this->doneOptions->Controls->Add(this->deleteAllDoings);
				this->doneOptions->ForeColor = System::Drawing::SystemColors::ActiveCaption;
				this->doneOptions->Location = System::Drawing::Point(1312, 86);
				this->doneOptions->Name = L"doneOptions";
				this->doneOptions->Size = System::Drawing::Size(116, 86);
				this->doneOptions->TabIndex = 19;
				this->doneOptions->TabStop = false;
				this->doneOptions->Visible = false;
				// 
				// saveDoings
				// 
				this->saveDoings->BackColor = System::Drawing::Color::CornflowerBlue;
				this->saveDoings->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
					static_cast<System::Int32>(static_cast<System::Byte>(119)));
				this->saveDoings->Location = System::Drawing::Point(10, 50);
				this->saveDoings->Name = L"saveDoings";
				this->saveDoings->Size = System::Drawing::Size(100, 22);
				this->saveDoings->TabIndex = 2;
				this->saveDoings->Text = L"сохранить";
				this->saveDoings->UseVisualStyleBackColor = false;
				this->saveDoings->Click += gcnew System::EventHandler(this, &MainForm::saveDoings_Click);
				// 
				// deleteAllDoings
				// 
				this->deleteAllDoings->BackColor = System::Drawing::Color::CornflowerBlue;
				this->deleteAllDoings->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
					static_cast<System::Int32>(static_cast<System::Byte>(119)));
				this->deleteAllDoings->Location = System::Drawing::Point(10, 22);
				this->deleteAllDoings->Name = L"deleteAllDoings";
				this->deleteAllDoings->Size = System::Drawing::Size(100, 22);
				this->deleteAllDoings->TabIndex = 1;
				this->deleteAllDoings->Text = L"очистить";
				this->deleteAllDoings->UseVisualStyleBackColor = false;
				this->deleteAllDoings->Click += gcnew System::EventHandler(this, &MainForm::deleteAllDoings_Click);
				// 
				// donePictureBox2
				// 
				this->donePictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
				this->donePictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"donePictureBox2.Image")));
				this->donePictureBox2->Location = System::Drawing::Point(1284, 98);
				this->donePictureBox2->Name = L"donePictureBox2";
				this->donePictureBox2->Size = System::Drawing::Size(22, 21);
				this->donePictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				this->donePictureBox2->TabIndex = 28;
				this->donePictureBox2->TabStop = false;
				this->donePictureBox2->Visible = false;
				this->donePictureBox2->Click += gcnew System::EventHandler(this, &MainForm::donePictureBox2_Click);
				// 
				// openFileDialog1
				// 
				this->openFileDialog1->FileName = L"openFileDialog1";
				// 
				// MainForm
				// 
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
				this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
					static_cast<System::Int32>(static_cast<System::Byte>(119)));
				this->ClientSize = System::Drawing::Size(1450, 768);
				this->Controls->Add(this->donePictureBox2);
				this->Controls->Add(this->doneOptions);
				this->Controls->Add(this->doneButton);
				this->Controls->Add(this->toDelete);
				this->Controls->Add(this->toLeft);
				this->Controls->Add(this->toRight);
				this->Controls->Add(this->sortingListButton_2);
				this->Controls->Add(this->sortingForDoingsListButton2);
				this->Controls->Add(this->sortingForDoingsListBox);
				this->Controls->Add(this->sortingForDoingsListButton);
				this->Controls->Add(this->sortingBox);
				this->Controls->Add(this->sortingListButton);
				this->Controls->Add(this->thirdList);
				this->Controls->Add(this->secondList);
				this->Controls->Add(this->addNewDoingButton);
				this->Controls->Add(this->firstList);
				this->Controls->Add(this->minimizeWindow);
				this->Controls->Add(this->maximizeWindow);
				this->Controls->Add(this->donePictureBox);
				this->Controls->Add(this->hideProgram);
				this->Controls->Add(this->alreadyDoneLabel);
				this->Controls->Add(this->doTodayLabel);
				this->Controls->Add(this->closeProgram);
				this->Controls->Add(this->listOfAllDoingsLabel);
				this->Controls->Add(this->separator_3);
				this->Controls->Add(this->leftPanel);
				this->Controls->Add(this->topPanel);
				this->Controls->Add(this->menuOptions);
				this->Controls->Add(this->toDeleteInactive);
				this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				this->MainMenuStrip = this->menuOptions;
				this->Name = L"MainForm";
				this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				this->Text = L"MainForm";
				this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
				this->leftPanel->ResumeLayout(false);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leaderplanIcon))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leaderplan))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchIcon))->EndInit();
				this->topPanel->ResumeLayout(false);
				this->topPanel->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->threeDots))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hideProgram))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimizeWindow))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->closeProgram))->EndInit();
				this->panel5->ResumeLayout(false);
				this->panel6->ResumeLayout(false);
				this->panel6->PerformLayout();
				this->panel1->ResumeLayout(false);
				this->panel1->PerformLayout();
				this->panel2->ResumeLayout(false);
				this->panel2->PerformLayout();
				this->panel3->ResumeLayout(false);
				this->panel3->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->donePictureBox))->EndInit();
				this->menuOptions->ResumeLayout(false);
				this->menuOptions->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maximizeWindow))->EndInit();
				this->firstList->ResumeLayout(false);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addNewDoingButton))->EndInit();
				this->secondList->ResumeLayout(false);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sortingListButton2))->EndInit();
				this->thirdList->ResumeLayout(false);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sortingListButton))->EndInit();
				this->sortingBox->ResumeLayout(false);
				this->sortingBox->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sortingForDoingsListButton))->EndInit();
				this->sortingForDoingsListBox->ResumeLayout(false);
				this->sortingForDoingsListBox->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sortingForDoingsListButton2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sortingListButton_2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toRight))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toLeft))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toDelete))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toDeleteInactive))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->doneButton))->EndInit();
				this->doneOptions->ResumeLayout(false);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->donePictureBox2))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
	#pragma endregion
};
}