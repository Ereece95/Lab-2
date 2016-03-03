#include "Location.h"
#pragma once
namespace Lab2
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// Pointer to declare location from Location.h
	Location* location = new Location();

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
	private: System::Windows::Forms::Button^  button1;
	protected:

	private:
		System::Drawing::Brush^ yelloBrush;
		System::Drawing::Brush^ whiteBrush;
		System::Drawing::Graphics^ g;




	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;

			 /// <summary>
			 /// Required designer variable.
			 /// </summary>
			 System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->button3 = (gcnew System::Windows::Forms::Button());
				 this->button4 = (gcnew System::Windows::Forms::Button());
				 this->button5 = (gcnew System::Windows::Forms::Button());
				 this->button7 = (gcnew System::Windows::Forms::Button());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // button1
				 // 
				 this->button1->BackColor = System::Drawing::SystemColors::Control;
				 this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
				 this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->button1->Location = System::Drawing::Point(66, 436);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(35, 35);
				 this->button1->TabIndex = 0;
				 this->button1->UseVisualStyleBackColor = false;
				 this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->Location = System::Drawing::Point(208, 144);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(181, 146);
				 this->pictureBox1->TabIndex = 1;
				 this->pictureBox1->TabStop = false;
				 // 
				 // button2
				 // 
				 this->button2->BackColor = System::Drawing::SystemColors::Control;
				 this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
				 this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->button2->Location = System::Drawing::Point(23, 477);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(35, 35);
				 this->button2->TabIndex = 2;
				 this->button2->UseVisualStyleBackColor = false;
				 this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
				 // 
				 // button3
				 // 
				 this->button3->BackColor = System::Drawing::SystemColors::Control;
				 this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
				 this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->button3->Location = System::Drawing::Point(106, 477);
				 this->button3->Name = L"button3";
				 this->button3->Size = System::Drawing::Size(35, 35);
				 this->button3->TabIndex = 3;
				 this->button3->UseVisualStyleBackColor = false;
				 this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
				 // 
				 // button4
				 // 
				 this->button4->BackColor = System::Drawing::SystemColors::Control;
				 this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
				 this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->button4->Location = System::Drawing::Point(66, 518);
				 this->button4->Name = L"button4";
				 this->button4->Size = System::Drawing::Size(35, 35);
				 this->button4->TabIndex = 4;
				 this->button4->UseVisualStyleBackColor = false;
				 this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
				 // 
				 // button5
				 // 
				 this->button5->BackColor = System::Drawing::SystemColors::Control;
				 this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->button5->Location = System::Drawing::Point(496, 516);
				 this->button5->Name = L"button5";
				 this->button5->Size = System::Drawing::Size(89, 37);
				 this->button5->TabIndex = 5;
				 this->button5->Text = L"Exit";
				 this->button5->UseVisualStyleBackColor = false;
				 this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
				 // 
				 // button7
				 // 
				 this->button7->Location = System::Drawing::Point(208, 518);
				 this->button7->Name = L"button7";
				 this->button7->Size = System::Drawing::Size(161, 35);
				 this->button7->TabIndex = 6;
				 this->button7->Text = L"Show Image";
				 this->button7->UseVisualStyleBackColor = true;
				 this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::White;
				 this->ClientSize = System::Drawing::Size(597, 565);
				 this->Controls->Add(this->button7);
				 this->Controls->Add(this->button1);
				 this->Controls->Add(this->button2);
				 this->Controls->Add(this->button4);
				 this->Controls->Add(this->button5);
				 this->Controls->Add(this->button3);
				 this->Controls->Add(this->pictureBox1);
				 this->Name = L"MyForm";
				 this->Text = L"MyForm";
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				 this->ResumeLayout(false);

			 }

#pragma endregion


			 bool Isvisible; // variable for the show/hide button

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{

		g = pictureBox1->CreateGraphics();
		Isvisible = false;
	}
			 // up button
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		//load bmp into the picture box
		Bitmap^ bmp = gcnew Bitmap(L"dwc.bmp");
		g->DrawImage(bmp, 0, 0);

		//move the picture box to up middle
		location->setY(location->getY() - 100);
		pictureBox1->Location = Point(location->getX(), location->getY());
	}
			 //left button
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//load bmp into the picture box
		Bitmap^ bmp = gcnew Bitmap(L"dwc.bmp");
		g->DrawImage(bmp, 0, 0);

		//move the picture box to up middle
		location->setX(location->getX() - 100);
		pictureBox1->Location = Point(location->getX(), location->getY());
	}
			 // right
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//load bmp into the picture box
		Bitmap^ bmp = gcnew Bitmap(L"dwc.bmp");

		// Draws image 
		g->DrawImage(bmp, 0, 0);

		// Sets x according to where it previously was
		location->setX(location->getX() + 100);

		// Moves picturebox
		pictureBox1->Location = Point(location->getX(), location->getY());
	}
			 // down
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//load bmp into the picture box
		Bitmap^ bmp = gcnew Bitmap(L"dwc.bmp");
		g->DrawImage(bmp, 0, 0);

		location->setY(location->getY() + 100);
		pictureBox1->Location = Point(location->getX(), location->getY());
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Application::Exit(); // Exit button
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (!Isvisible)
		{
			button7->Text = "Hide Monkey";
			Bitmap^ bmp = gcnew Bitmap(L"dwc.bmp");
			g->DrawImage(bmp, 0, 0);
			Isvisible = true;
		}
		else
		{
			button7->Text = "Show Monkey";
			pictureBox1->Refresh();
			Isvisible = false;
		}
	}
	};
}
