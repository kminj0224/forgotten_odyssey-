/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d3890  Symbol: Lode_File */

/* SkillTreeLayer::Lode_File(int) */

void __thiscall SkillTreeLayer::Lode_File(SkillTreeLayer *this,int param_1)

{
  if (param_1 == 0) {
    Draw_Castle_Tree(this);
    Draw_Base_Count_or_Total_Number(this,0);
  }
  else {
    Draw_Kai_Tree(this,param_1);
    Draw_Skill_Count_or_Total_Number(this,param_1);
  }
  return;
}


