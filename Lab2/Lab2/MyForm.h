#pragma once

namespace Lab2 {

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
	private: System::Windows::Forms::Button^  button_Up;
	protected:
	private: System::Windows::Forms::Button^  button_Down;
	private: System::Windows::Forms::Button^  button_Left;
	private: System::Windows::Forms::Button^  button_Right;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button_Hide;
			 Bitmap^ bmp;
			 System::Drawing::Graphics^ g;
	private:
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
			this->button_Up = (gcnew System::Windows::Forms::Button());
			this->button_Down = (gcnew System::Windows::Forms::Button());
			this->button_Left = (gcnew System::Windows::Forms::Button());
			this->button_Right = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button_Hide = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button_Up
			// 
			this->button_Up->Location = System::Drawing::Point(111, 294);
			this->button_Up->Name = L"button_Up";
			this->button_Up->Size = System::Drawing::Size(75, 23);
			this->button_Up->TabIndex = 0;
			this->button_Up->Text = L"Up";
			this->button_Up->UseVisualStyleBackColor = true;
			this->button_Up->Click += gcnew System::EventHandler(this, &MyForm::button_Up_Click);
			// 
			// button_Down
			// 
			this->button_Down->Location = System::Drawing::Point(111, 351);
			this->button_Down->Name = L"button_Down";
			this->button_Down->Size = System::Drawing::Size(75, 23);
			this->button_Down->TabIndex = 1;
			this->button_Down->Text = L"Down";
			this->button_Down->UseVisualStyleBackColor = true;
			this->button_Down->Click += gcnew System::EventHandler(this, &MyForm::button_Down_Click);
			// 
			// button_Left
			// 
			this->button_Left->Location = System::Drawing::Point(29, 324);
			this->button_Left->Name = L"button_Left";
			this->button_Left->Size = System::Drawing::Size(75, 23);
			this->button_Left->TabIndex = 2;
			this->button_Left->Text = L"Left";
			this->button_Left->UseVisualStyleBackColor = true;
			this->button_Left->Click += gcnew System::EventHandler(this, &MyForm::button_Left_Click);
			// 
			// button_Right
			// 
			this->button_Right->Location = System::Drawing::Point(195, 324);
			this->button_Right->Name = L"button_Right";
			this->button_Right->Size = System::Drawing::Size(75, 23);
			this->button_Right->TabIndex = 3;
			this->button_Right->Text = L"Right";
			this->button_Right->UseVisualStyleBackColor = true;
			this->button_Right->Click += gcnew System::EventHandler(this, &MyForm::button_Right_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(29, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(442, 256);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button_Hide
			// 
			this->button_Hide->Location = System::Drawing::Point(396, 324);
			this->button_Hide->Name = L"button_Hide";
			this->button_Hide->Size = System::Drawing::Size(75, 23);
			this->button_Hide->TabIndex = 5;
			this->button_Hide->Text = L"Hide";
			this->button_Hide->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(525, 374);
			this->Controls->Add(this->button_Hide);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button_Right);
			this->Controls->Add(this->button_Left);
			this->Controls->Add(this->button_Down);
			this->Controls->Add(this->button_Up);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void button_Up_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void button_Down_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void button_Left_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void button_Right_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		
		using namespace System;
		array<Int32, 2>^ twoDArray = gcnew array<Int32, 2>(5, 5);

		
		g = pictureBox1->CreateGraphics();
		//Bitmap^ bmp = gcnew Bitmap(L"sparky.bmp");
		Image^ img = Image::FromFile(L"sparky.bmp");

	}

	private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
	{
		array<Int32, 2>^ twoDArray = gcnew array<Int32, 2>(5, 5);
		g = pictureBox1->CreateGraphics();
		//Bitmap^ bmp = gcnew Bitmap(L"sparky.bmp");
		Image^ img = Image::FromFile(L"sparky.bmp");
		
		g = pictureBox1->CreateGraphics();
		Pen^ pen = gcnew Pen(Color::Red);

		int numOfCandR = 5;
		int cellSize = 50; //L*W

		for (int i = 0; i <= numOfCandR; i++)
		{
			// Vertical lines
			g->DrawLine(pen, i * cellSize, 0, i * cellSize, numOfCandR * cellSize);

			for (int j = 0; j <= numOfCandR; j++)
			{
				// Horizontal lines
				g->DrawLine(pen, 0, j * cellSize, numOfCandR * cellSize, j * cellSize);

			}

		}
		g->DrawImage(img, twoDArray[1, 3] * cellSize, twoDArray[2, 4] * cellSize, cellSize, cellSize);
	}
};
}




