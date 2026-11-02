/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d0bb4  Symbol: Set_Item_Text */

/* Item_Text_View_Layer::Set_Item_Text(int, int) */

void __thiscall
Item_Text_View_Layer::Set_Item_Text(Item_Text_View_Layer *this,int param_1,int param_2)

{
  getState(this,param_1,param_2);
  if (*(int *)(this + 0x110) == 0) {
    Remove_Text(this);
  }
  else {
    Set_Title(this,param_1,param_2);
    Set_Title_Sub(this,param_1,param_2);
    Set_String(this,param_1,param_2);
    if (1 < param_2 - 4U) {
      Set_Lv((int)this,param_1);
    }
    if ((param_2 - 2U < 2) || (param_2 == 5)) {
      Set_Buy_Money(this,param_1,param_2);
    }
    else if (param_2 != 4) {
      Set_Sell_Money(this,param_1,param_2);
    }
  }
  return;
}


