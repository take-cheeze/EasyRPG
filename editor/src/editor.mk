##
## Auto Generated makefile, please do not edit
##
ProjectName:=editor

## Debug
ConfigurationName :=Debug
IntermediateDirectory :=../.obj/Debug
OutDir := $(IntermediateDirectory)
LinkerName:=g++
ArchiveTool :=ar rcus
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix :=.o
DependSuffix :=.o.d
PreprocessSuffix :=
DebugSwitch :=-gstab
IncludeSwitch :=-I
LibrarySwitch :=-l
OutputSwitch :=-o 
LibraryPathSwitch :=-L
PreprocessorSwitch :=-D
SourceSwitch :=-c 
CompilerName :=g++
OutputFile :=../bin/editor
Preprocessors :=$(PreprocessorSwitch)__WX__ 
ObjectSwitch :=-o 
ArchiveOutputSwitch := 
PreprocessOnlySwitch :=
CmpOptions :=-Wall -Wextra -ansi  $(shell wx-config --cxxflags --unicode=yes --debug=yes) -g  $(Preprocessors)
RcCmpOptions := 
RcCompilerName :=windres
LinkOptions := -O2  $(shell wx-config --libs --unicode=yes --debug=yes) 
IncludePath :=  "$(IncludeSwitch)C:/wxWidgets-2.8.7/include" 
RcIncludePath :=
Libs :=
LibPath := 


Objects=$(IntermediateDirectory)/DialogEvtCmdMemorizePlace$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdPlayVideo$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdCommerce$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdShake$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdMessage$(ObjectSuffix) $(IntermediateDirectory)/FrameEditor$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdEventMovement$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdTone$(ObjectSuffix) $(IntermediateDirectory)/DialogDbSelectAnyGraphic$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdVehicleGraphic$(ObjectSuffix) \
	$(IntermediateDirectory)/DialogEvtCmdBattle$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdPlaySound$(ObjectSuffix) $(IntermediateDirectory)/DialogMaterial$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdBlankScreen$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdSystemMusic$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdWeather$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdSkill$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdConditions$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmd$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdEscapePermissions$(ObjectSuffix) \
	$(IntermediateDirectory)/DialogEvtCmdVariable$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdMP$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdItem$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdActorNameInput$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdInn$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdSwitch$(ObjectSuffix) $(IntermediateDirectory)/main$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdEventPosition$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdTeleportPermissions$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdActorGraphic$(ObjectSuffix) \
	$(IntermediateDirectory)/DialogEvtCmdMoney$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdSavePermissions$(ObjectSuffix) $(IntermediateDirectory)/DialogEvt$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdVehiclePosition$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdTeleport$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdChoice$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdDamage$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdActorTransparency$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdFlashCharacter$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdParameter$(ObjectSuffix) \
	$(IntermediateDirectory)/DialogEvtCmdEncounterRate$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdLevel$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdSystemSound$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdSwapEvents$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdActorName$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdEscapePlace$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdPlayMusic$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdGetPositionID$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdShowScreen$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdGoToMemorizedPlace$(ObjectSuffix) \
	$(IntermediateDirectory)/DialogEvtCmdActorTitle$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdSystemMenuPermissions$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdParty$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdPicture$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdTimer$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdMoveScreen$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdLabel$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdGoToLabel$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdStatus$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdFlashScreen$(ObjectSuffix) \
	$(IntermediateDirectory)/DialogEvtCmdKeyAssignment$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdMessageOptions$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdPanorama$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdFadeMusic$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdTransition$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdEquipment$(ObjectSuffix) $(IntermediateDirectory)/DialogDb$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdTileset$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdTile$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdWait$(ObjectSuffix) \
	$(IntermediateDirectory)/DialogEvtCmdGetTerrainID$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdNotes$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdTeleportPlace$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdCallEvent$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdDeletePicture$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdExperience$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdAnimation$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdNumberInput$(ObjectSuffix) $(IntermediateDirectory)/DialogDbLearnSkill$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdFaceGraphic$(ObjectSuffix) \
	$(IntermediateDirectory)/DialogEvtCmdSystemGraphic$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdActorFaceGraphic$(ObjectSuffix) $(IntermediateDirectory)/DialogMap$(ObjectSuffix) $(IntermediateDirectory)/DialogDbMaxNumber$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdRecover$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdMovePicture$(ObjectSuffix) $(IntermediateDirectory)/DialogEvtCmdHP$(ObjectSuffix) $(IntermediateDirectory)/lmtReader$(ObjectSuffix) $(IntermediateDirectory)/tools$(ObjectSuffix) $(IntermediateDirectory)/ldb_data$(ObjectSuffix) \
	$(IntermediateDirectory)/ldbReader$(ObjectSuffix) $(IntermediateDirectory)/ldbstr$(ObjectSuffix) $(IntermediateDirectory)/stevent$(ObjectSuffix) 

##
## Main Build Tragets 
##
all: $(OutputFile)

$(OutputFile): makeDirStep  $(Objects)
	@mkdir -p $(@D)
	$(LinkerName) $(OutputSwitch)$(OutputFile) $(Objects) $(LibPath) $(Libs) $(LinkOptions)

makeDirStep:
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/DialogEvtCmdMemorizePlace$(ObjectSuffix): DialogEvtCmdMemorizePlace.cpp $(IntermediateDirectory)/DialogEvtCmdMemorizePlace$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdMemorizePlace.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdMemorizePlace$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdMemorizePlace$(DependSuffix): DialogEvtCmdMemorizePlace.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdMemorizePlace$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdMemorizePlace$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdMemorizePlace.cpp"

$(IntermediateDirectory)/DialogEvtCmdPlayVideo$(ObjectSuffix): DialogEvtCmdPlayVideo.cpp $(IntermediateDirectory)/DialogEvtCmdPlayVideo$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdPlayVideo.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdPlayVideo$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdPlayVideo$(DependSuffix): DialogEvtCmdPlayVideo.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdPlayVideo$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdPlayVideo$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdPlayVideo.cpp"

$(IntermediateDirectory)/DialogEvtCmdCommerce$(ObjectSuffix): DialogEvtCmdCommerce.cpp $(IntermediateDirectory)/DialogEvtCmdCommerce$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdCommerce.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdCommerce$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdCommerce$(DependSuffix): DialogEvtCmdCommerce.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdCommerce$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdCommerce$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdCommerce.cpp"

$(IntermediateDirectory)/DialogEvtCmdShake$(ObjectSuffix): DialogEvtCmdShake.cpp $(IntermediateDirectory)/DialogEvtCmdShake$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdShake.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdShake$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdShake$(DependSuffix): DialogEvtCmdShake.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdShake$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdShake$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdShake.cpp"

$(IntermediateDirectory)/DialogEvtCmdMessage$(ObjectSuffix): DialogEvtCmdMessage.cpp $(IntermediateDirectory)/DialogEvtCmdMessage$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdMessage.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdMessage$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdMessage$(DependSuffix): DialogEvtCmdMessage.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdMessage$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdMessage$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdMessage.cpp"

$(IntermediateDirectory)/FrameEditor$(ObjectSuffix): FrameEditor.cpp $(IntermediateDirectory)/FrameEditor$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/FrameEditor.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/FrameEditor$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/FrameEditor$(DependSuffix): FrameEditor.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/FrameEditor$(ObjectSuffix) -MF$(IntermediateDirectory)/FrameEditor$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/FrameEditor.cpp"

$(IntermediateDirectory)/DialogEvtCmdEventMovement$(ObjectSuffix): DialogEvtCmdEventMovement.cpp $(IntermediateDirectory)/DialogEvtCmdEventMovement$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdEventMovement.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdEventMovement$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdEventMovement$(DependSuffix): DialogEvtCmdEventMovement.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdEventMovement$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdEventMovement$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdEventMovement.cpp"

$(IntermediateDirectory)/DialogEvtCmdTone$(ObjectSuffix): DialogEvtCmdTone.cpp $(IntermediateDirectory)/DialogEvtCmdTone$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdTone.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdTone$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdTone$(DependSuffix): DialogEvtCmdTone.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdTone$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdTone$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdTone.cpp"

$(IntermediateDirectory)/DialogDbSelectAnyGraphic$(ObjectSuffix): DialogDbSelectAnyGraphic.cpp $(IntermediateDirectory)/DialogDbSelectAnyGraphic$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogDbSelectAnyGraphic.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogDbSelectAnyGraphic$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogDbSelectAnyGraphic$(DependSuffix): DialogDbSelectAnyGraphic.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogDbSelectAnyGraphic$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogDbSelectAnyGraphic$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogDbSelectAnyGraphic.cpp"

$(IntermediateDirectory)/DialogEvtCmdVehicleGraphic$(ObjectSuffix): DialogEvtCmdVehicleGraphic.cpp $(IntermediateDirectory)/DialogEvtCmdVehicleGraphic$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdVehicleGraphic.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdVehicleGraphic$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdVehicleGraphic$(DependSuffix): DialogEvtCmdVehicleGraphic.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdVehicleGraphic$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdVehicleGraphic$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdVehicleGraphic.cpp"

$(IntermediateDirectory)/DialogEvtCmdBattle$(ObjectSuffix): DialogEvtCmdBattle.cpp $(IntermediateDirectory)/DialogEvtCmdBattle$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdBattle.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdBattle$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdBattle$(DependSuffix): DialogEvtCmdBattle.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdBattle$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdBattle$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdBattle.cpp"

$(IntermediateDirectory)/DialogEvtCmdPlaySound$(ObjectSuffix): DialogEvtCmdPlaySound.cpp $(IntermediateDirectory)/DialogEvtCmdPlaySound$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdPlaySound.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdPlaySound$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdPlaySound$(DependSuffix): DialogEvtCmdPlaySound.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdPlaySound$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdPlaySound$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdPlaySound.cpp"

$(IntermediateDirectory)/DialogMaterial$(ObjectSuffix): DialogMaterial.cpp $(IntermediateDirectory)/DialogMaterial$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogMaterial.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogMaterial$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogMaterial$(DependSuffix): DialogMaterial.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogMaterial$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogMaterial$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogMaterial.cpp"

$(IntermediateDirectory)/DialogEvtCmdBlankScreen$(ObjectSuffix): DialogEvtCmdBlankScreen.cpp $(IntermediateDirectory)/DialogEvtCmdBlankScreen$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdBlankScreen.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdBlankScreen$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdBlankScreen$(DependSuffix): DialogEvtCmdBlankScreen.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdBlankScreen$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdBlankScreen$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdBlankScreen.cpp"

$(IntermediateDirectory)/DialogEvtCmdSystemMusic$(ObjectSuffix): DialogEvtCmdSystemMusic.cpp $(IntermediateDirectory)/DialogEvtCmdSystemMusic$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdSystemMusic.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdSystemMusic$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdSystemMusic$(DependSuffix): DialogEvtCmdSystemMusic.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdSystemMusic$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdSystemMusic$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdSystemMusic.cpp"

$(IntermediateDirectory)/DialogEvtCmdWeather$(ObjectSuffix): DialogEvtCmdWeather.cpp $(IntermediateDirectory)/DialogEvtCmdWeather$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdWeather.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdWeather$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdWeather$(DependSuffix): DialogEvtCmdWeather.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdWeather$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdWeather$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdWeather.cpp"

$(IntermediateDirectory)/DialogEvtCmdSkill$(ObjectSuffix): DialogEvtCmdSkill.cpp $(IntermediateDirectory)/DialogEvtCmdSkill$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdSkill.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdSkill$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdSkill$(DependSuffix): DialogEvtCmdSkill.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdSkill$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdSkill$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdSkill.cpp"

$(IntermediateDirectory)/DialogEvtCmdConditions$(ObjectSuffix): DialogEvtCmdConditions.cpp $(IntermediateDirectory)/DialogEvtCmdConditions$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdConditions.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdConditions$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdConditions$(DependSuffix): DialogEvtCmdConditions.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdConditions$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdConditions$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdConditions.cpp"

$(IntermediateDirectory)/DialogEvtCmd$(ObjectSuffix): DialogEvtCmd.cpp $(IntermediateDirectory)/DialogEvtCmd$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmd.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmd$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmd$(DependSuffix): DialogEvtCmd.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmd$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmd$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmd.cpp"

$(IntermediateDirectory)/DialogEvtCmdEscapePermissions$(ObjectSuffix): DialogEvtCmdEscapePermissions.cpp $(IntermediateDirectory)/DialogEvtCmdEscapePermissions$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdEscapePermissions.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdEscapePermissions$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdEscapePermissions$(DependSuffix): DialogEvtCmdEscapePermissions.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdEscapePermissions$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdEscapePermissions$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdEscapePermissions.cpp"

$(IntermediateDirectory)/DialogEvtCmdVariable$(ObjectSuffix): DialogEvtCmdVariable.cpp $(IntermediateDirectory)/DialogEvtCmdVariable$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdVariable.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdVariable$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdVariable$(DependSuffix): DialogEvtCmdVariable.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdVariable$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdVariable$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdVariable.cpp"

$(IntermediateDirectory)/DialogEvtCmdMP$(ObjectSuffix): DialogEvtCmdMP.cpp $(IntermediateDirectory)/DialogEvtCmdMP$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdMP.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdMP$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdMP$(DependSuffix): DialogEvtCmdMP.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdMP$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdMP$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdMP.cpp"

$(IntermediateDirectory)/DialogEvtCmdItem$(ObjectSuffix): DialogEvtCmdItem.cpp $(IntermediateDirectory)/DialogEvtCmdItem$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdItem.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdItem$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdItem$(DependSuffix): DialogEvtCmdItem.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdItem$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdItem$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdItem.cpp"

$(IntermediateDirectory)/DialogEvtCmdActorNameInput$(ObjectSuffix): DialogEvtCmdActorNameInput.cpp $(IntermediateDirectory)/DialogEvtCmdActorNameInput$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdActorNameInput.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdActorNameInput$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdActorNameInput$(DependSuffix): DialogEvtCmdActorNameInput.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdActorNameInput$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdActorNameInput$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdActorNameInput.cpp"

$(IntermediateDirectory)/DialogEvtCmdInn$(ObjectSuffix): DialogEvtCmdInn.cpp $(IntermediateDirectory)/DialogEvtCmdInn$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdInn.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdInn$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdInn$(DependSuffix): DialogEvtCmdInn.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdInn$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdInn$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdInn.cpp"

$(IntermediateDirectory)/DialogEvtCmdSwitch$(ObjectSuffix): DialogEvtCmdSwitch.cpp $(IntermediateDirectory)/DialogEvtCmdSwitch$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdSwitch.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdSwitch$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdSwitch$(DependSuffix): DialogEvtCmdSwitch.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdSwitch$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdSwitch$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdSwitch.cpp"

$(IntermediateDirectory)/main$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/main.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/main$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main$(DependSuffix): main.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/main$(ObjectSuffix) -MF$(IntermediateDirectory)/main$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/main.cpp"

$(IntermediateDirectory)/DialogEvtCmdEventPosition$(ObjectSuffix): DialogEvtCmdEventPosition.cpp $(IntermediateDirectory)/DialogEvtCmdEventPosition$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdEventPosition.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdEventPosition$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdEventPosition$(DependSuffix): DialogEvtCmdEventPosition.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdEventPosition$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdEventPosition$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdEventPosition.cpp"

$(IntermediateDirectory)/DialogEvtCmdTeleportPermissions$(ObjectSuffix): DialogEvtCmdTeleportPermissions.cpp $(IntermediateDirectory)/DialogEvtCmdTeleportPermissions$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdTeleportPermissions.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdTeleportPermissions$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdTeleportPermissions$(DependSuffix): DialogEvtCmdTeleportPermissions.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdTeleportPermissions$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdTeleportPermissions$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdTeleportPermissions.cpp"

$(IntermediateDirectory)/DialogEvtCmdActorGraphic$(ObjectSuffix): DialogEvtCmdActorGraphic.cpp $(IntermediateDirectory)/DialogEvtCmdActorGraphic$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdActorGraphic.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdActorGraphic$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdActorGraphic$(DependSuffix): DialogEvtCmdActorGraphic.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdActorGraphic$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdActorGraphic$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdActorGraphic.cpp"

$(IntermediateDirectory)/DialogEvtCmdMoney$(ObjectSuffix): DialogEvtCmdMoney.cpp $(IntermediateDirectory)/DialogEvtCmdMoney$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdMoney.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdMoney$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdMoney$(DependSuffix): DialogEvtCmdMoney.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdMoney$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdMoney$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdMoney.cpp"

$(IntermediateDirectory)/DialogEvtCmdSavePermissions$(ObjectSuffix): DialogEvtCmdSavePermissions.cpp $(IntermediateDirectory)/DialogEvtCmdSavePermissions$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdSavePermissions.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdSavePermissions$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdSavePermissions$(DependSuffix): DialogEvtCmdSavePermissions.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdSavePermissions$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdSavePermissions$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdSavePermissions.cpp"

$(IntermediateDirectory)/DialogEvt$(ObjectSuffix): DialogEvt.cpp $(IntermediateDirectory)/DialogEvt$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvt.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvt$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvt$(DependSuffix): DialogEvt.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvt$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvt$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvt.cpp"

$(IntermediateDirectory)/DialogEvtCmdVehiclePosition$(ObjectSuffix): DialogEvtCmdVehiclePosition.cpp $(IntermediateDirectory)/DialogEvtCmdVehiclePosition$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdVehiclePosition.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdVehiclePosition$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdVehiclePosition$(DependSuffix): DialogEvtCmdVehiclePosition.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdVehiclePosition$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdVehiclePosition$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdVehiclePosition.cpp"

$(IntermediateDirectory)/DialogEvtCmdTeleport$(ObjectSuffix): DialogEvtCmdTeleport.cpp $(IntermediateDirectory)/DialogEvtCmdTeleport$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdTeleport.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdTeleport$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdTeleport$(DependSuffix): DialogEvtCmdTeleport.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdTeleport$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdTeleport$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdTeleport.cpp"

$(IntermediateDirectory)/DialogEvtCmdChoice$(ObjectSuffix): DialogEvtCmdChoice.cpp $(IntermediateDirectory)/DialogEvtCmdChoice$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdChoice.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdChoice$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdChoice$(DependSuffix): DialogEvtCmdChoice.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdChoice$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdChoice$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdChoice.cpp"

$(IntermediateDirectory)/DialogEvtCmdDamage$(ObjectSuffix): DialogEvtCmdDamage.cpp $(IntermediateDirectory)/DialogEvtCmdDamage$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdDamage.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdDamage$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdDamage$(DependSuffix): DialogEvtCmdDamage.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdDamage$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdDamage$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdDamage.cpp"

$(IntermediateDirectory)/DialogEvtCmdActorTransparency$(ObjectSuffix): DialogEvtCmdActorTransparency.cpp $(IntermediateDirectory)/DialogEvtCmdActorTransparency$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdActorTransparency.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdActorTransparency$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdActorTransparency$(DependSuffix): DialogEvtCmdActorTransparency.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdActorTransparency$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdActorTransparency$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdActorTransparency.cpp"

$(IntermediateDirectory)/DialogEvtCmdFlashCharacter$(ObjectSuffix): DialogEvtCmdFlashCharacter.cpp $(IntermediateDirectory)/DialogEvtCmdFlashCharacter$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdFlashCharacter.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdFlashCharacter$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdFlashCharacter$(DependSuffix): DialogEvtCmdFlashCharacter.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdFlashCharacter$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdFlashCharacter$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdFlashCharacter.cpp"

$(IntermediateDirectory)/DialogEvtCmdParameter$(ObjectSuffix): DialogEvtCmdParameter.cpp $(IntermediateDirectory)/DialogEvtCmdParameter$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdParameter.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdParameter$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdParameter$(DependSuffix): DialogEvtCmdParameter.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdParameter$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdParameter$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdParameter.cpp"

$(IntermediateDirectory)/DialogEvtCmdEncounterRate$(ObjectSuffix): DialogEvtCmdEncounterRate.cpp $(IntermediateDirectory)/DialogEvtCmdEncounterRate$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdEncounterRate.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdEncounterRate$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdEncounterRate$(DependSuffix): DialogEvtCmdEncounterRate.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdEncounterRate$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdEncounterRate$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdEncounterRate.cpp"

$(IntermediateDirectory)/DialogEvtCmdLevel$(ObjectSuffix): DialogEvtCmdLevel.cpp $(IntermediateDirectory)/DialogEvtCmdLevel$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdLevel.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdLevel$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdLevel$(DependSuffix): DialogEvtCmdLevel.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdLevel$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdLevel$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdLevel.cpp"

$(IntermediateDirectory)/DialogEvtCmdSystemSound$(ObjectSuffix): DialogEvtCmdSystemSound.cpp $(IntermediateDirectory)/DialogEvtCmdSystemSound$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdSystemSound.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdSystemSound$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdSystemSound$(DependSuffix): DialogEvtCmdSystemSound.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdSystemSound$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdSystemSound$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdSystemSound.cpp"

$(IntermediateDirectory)/DialogEvtCmdSwapEvents$(ObjectSuffix): DialogEvtCmdSwapEvents.cpp $(IntermediateDirectory)/DialogEvtCmdSwapEvents$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdSwapEvents.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdSwapEvents$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdSwapEvents$(DependSuffix): DialogEvtCmdSwapEvents.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdSwapEvents$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdSwapEvents$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdSwapEvents.cpp"

$(IntermediateDirectory)/DialogEvtCmdActorName$(ObjectSuffix): DialogEvtCmdActorName.cpp $(IntermediateDirectory)/DialogEvtCmdActorName$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdActorName.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdActorName$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdActorName$(DependSuffix): DialogEvtCmdActorName.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdActorName$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdActorName$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdActorName.cpp"

$(IntermediateDirectory)/DialogEvtCmdEscapePlace$(ObjectSuffix): DialogEvtCmdEscapePlace.cpp $(IntermediateDirectory)/DialogEvtCmdEscapePlace$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdEscapePlace.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdEscapePlace$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdEscapePlace$(DependSuffix): DialogEvtCmdEscapePlace.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdEscapePlace$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdEscapePlace$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdEscapePlace.cpp"

$(IntermediateDirectory)/DialogEvtCmdPlayMusic$(ObjectSuffix): DialogEvtCmdPlayMusic.cpp $(IntermediateDirectory)/DialogEvtCmdPlayMusic$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdPlayMusic.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdPlayMusic$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdPlayMusic$(DependSuffix): DialogEvtCmdPlayMusic.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdPlayMusic$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdPlayMusic$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdPlayMusic.cpp"

$(IntermediateDirectory)/DialogEvtCmdGetPositionID$(ObjectSuffix): DialogEvtCmdGetPositionID.cpp $(IntermediateDirectory)/DialogEvtCmdGetPositionID$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdGetPositionID.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdGetPositionID$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdGetPositionID$(DependSuffix): DialogEvtCmdGetPositionID.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdGetPositionID$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdGetPositionID$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdGetPositionID.cpp"

$(IntermediateDirectory)/DialogEvtCmdShowScreen$(ObjectSuffix): DialogEvtCmdShowScreen.cpp $(IntermediateDirectory)/DialogEvtCmdShowScreen$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdShowScreen.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdShowScreen$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdShowScreen$(DependSuffix): DialogEvtCmdShowScreen.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdShowScreen$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdShowScreen$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdShowScreen.cpp"

$(IntermediateDirectory)/DialogEvtCmdGoToMemorizedPlace$(ObjectSuffix): DialogEvtCmdGoToMemorizedPlace.cpp $(IntermediateDirectory)/DialogEvtCmdGoToMemorizedPlace$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdGoToMemorizedPlace.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdGoToMemorizedPlace$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdGoToMemorizedPlace$(DependSuffix): DialogEvtCmdGoToMemorizedPlace.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdGoToMemorizedPlace$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdGoToMemorizedPlace$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdGoToMemorizedPlace.cpp"

$(IntermediateDirectory)/DialogEvtCmdActorTitle$(ObjectSuffix): DialogEvtCmdActorTitle.cpp $(IntermediateDirectory)/DialogEvtCmdActorTitle$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdActorTitle.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdActorTitle$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdActorTitle$(DependSuffix): DialogEvtCmdActorTitle.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdActorTitle$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdActorTitle$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdActorTitle.cpp"

$(IntermediateDirectory)/DialogEvtCmdSystemMenuPermissions$(ObjectSuffix): DialogEvtCmdSystemMenuPermissions.cpp $(IntermediateDirectory)/DialogEvtCmdSystemMenuPermissions$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdSystemMenuPermissions.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdSystemMenuPermissions$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdSystemMenuPermissions$(DependSuffix): DialogEvtCmdSystemMenuPermissions.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdSystemMenuPermissions$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdSystemMenuPermissions$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdSystemMenuPermissions.cpp"

$(IntermediateDirectory)/DialogEvtCmdParty$(ObjectSuffix): DialogEvtCmdParty.cpp $(IntermediateDirectory)/DialogEvtCmdParty$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdParty.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdParty$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdParty$(DependSuffix): DialogEvtCmdParty.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdParty$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdParty$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdParty.cpp"

$(IntermediateDirectory)/DialogEvtCmdPicture$(ObjectSuffix): DialogEvtCmdPicture.cpp $(IntermediateDirectory)/DialogEvtCmdPicture$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdPicture.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdPicture$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdPicture$(DependSuffix): DialogEvtCmdPicture.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdPicture$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdPicture$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdPicture.cpp"

$(IntermediateDirectory)/DialogEvtCmdTimer$(ObjectSuffix): DialogEvtCmdTimer.cpp $(IntermediateDirectory)/DialogEvtCmdTimer$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdTimer.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdTimer$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdTimer$(DependSuffix): DialogEvtCmdTimer.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdTimer$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdTimer$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdTimer.cpp"

$(IntermediateDirectory)/DialogEvtCmdMoveScreen$(ObjectSuffix): DialogEvtCmdMoveScreen.cpp $(IntermediateDirectory)/DialogEvtCmdMoveScreen$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdMoveScreen.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdMoveScreen$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdMoveScreen$(DependSuffix): DialogEvtCmdMoveScreen.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdMoveScreen$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdMoveScreen$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdMoveScreen.cpp"

$(IntermediateDirectory)/DialogEvtCmdLabel$(ObjectSuffix): DialogEvtCmdLabel.cpp $(IntermediateDirectory)/DialogEvtCmdLabel$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdLabel.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdLabel$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdLabel$(DependSuffix): DialogEvtCmdLabel.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdLabel$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdLabel$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdLabel.cpp"

$(IntermediateDirectory)/DialogEvtCmdGoToLabel$(ObjectSuffix): DialogEvtCmdGoToLabel.cpp $(IntermediateDirectory)/DialogEvtCmdGoToLabel$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdGoToLabel.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdGoToLabel$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdGoToLabel$(DependSuffix): DialogEvtCmdGoToLabel.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdGoToLabel$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdGoToLabel$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdGoToLabel.cpp"

$(IntermediateDirectory)/DialogEvtCmdStatus$(ObjectSuffix): DialogEvtCmdStatus.cpp $(IntermediateDirectory)/DialogEvtCmdStatus$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdStatus.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdStatus$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdStatus$(DependSuffix): DialogEvtCmdStatus.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdStatus$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdStatus$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdStatus.cpp"

$(IntermediateDirectory)/DialogEvtCmdFlashScreen$(ObjectSuffix): DialogEvtCmdFlashScreen.cpp $(IntermediateDirectory)/DialogEvtCmdFlashScreen$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdFlashScreen.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdFlashScreen$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdFlashScreen$(DependSuffix): DialogEvtCmdFlashScreen.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdFlashScreen$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdFlashScreen$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdFlashScreen.cpp"

$(IntermediateDirectory)/DialogEvtCmdKeyAssignment$(ObjectSuffix): DialogEvtCmdKeyAssignment.cpp $(IntermediateDirectory)/DialogEvtCmdKeyAssignment$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdKeyAssignment.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdKeyAssignment$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdKeyAssignment$(DependSuffix): DialogEvtCmdKeyAssignment.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdKeyAssignment$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdKeyAssignment$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdKeyAssignment.cpp"

$(IntermediateDirectory)/DialogEvtCmdMessageOptions$(ObjectSuffix): DialogEvtCmdMessageOptions.cpp $(IntermediateDirectory)/DialogEvtCmdMessageOptions$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdMessageOptions.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdMessageOptions$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdMessageOptions$(DependSuffix): DialogEvtCmdMessageOptions.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdMessageOptions$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdMessageOptions$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdMessageOptions.cpp"

$(IntermediateDirectory)/DialogEvtCmdPanorama$(ObjectSuffix): DialogEvtCmdPanorama.cpp $(IntermediateDirectory)/DialogEvtCmdPanorama$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdPanorama.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdPanorama$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdPanorama$(DependSuffix): DialogEvtCmdPanorama.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdPanorama$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdPanorama$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdPanorama.cpp"

$(IntermediateDirectory)/DialogEvtCmdFadeMusic$(ObjectSuffix): DialogEvtCmdFadeMusic.cpp $(IntermediateDirectory)/DialogEvtCmdFadeMusic$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdFadeMusic.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdFadeMusic$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdFadeMusic$(DependSuffix): DialogEvtCmdFadeMusic.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdFadeMusic$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdFadeMusic$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdFadeMusic.cpp"

$(IntermediateDirectory)/DialogEvtCmdTransition$(ObjectSuffix): DialogEvtCmdTransition.cpp $(IntermediateDirectory)/DialogEvtCmdTransition$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdTransition.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdTransition$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdTransition$(DependSuffix): DialogEvtCmdTransition.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdTransition$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdTransition$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdTransition.cpp"

$(IntermediateDirectory)/DialogEvtCmdEquipment$(ObjectSuffix): DialogEvtCmdEquipment.cpp $(IntermediateDirectory)/DialogEvtCmdEquipment$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdEquipment.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdEquipment$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdEquipment$(DependSuffix): DialogEvtCmdEquipment.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdEquipment$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdEquipment$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdEquipment.cpp"

$(IntermediateDirectory)/DialogDb$(ObjectSuffix): DialogDb.cpp $(IntermediateDirectory)/DialogDb$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogDb.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogDb$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogDb$(DependSuffix): DialogDb.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogDb$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogDb$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogDb.cpp"

$(IntermediateDirectory)/DialogEvtCmdTileset$(ObjectSuffix): DialogEvtCmdTileset.cpp $(IntermediateDirectory)/DialogEvtCmdTileset$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdTileset.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdTileset$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdTileset$(DependSuffix): DialogEvtCmdTileset.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdTileset$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdTileset$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdTileset.cpp"

$(IntermediateDirectory)/DialogEvtCmdTile$(ObjectSuffix): DialogEvtCmdTile.cpp $(IntermediateDirectory)/DialogEvtCmdTile$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdTile.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdTile$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdTile$(DependSuffix): DialogEvtCmdTile.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdTile$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdTile$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdTile.cpp"

$(IntermediateDirectory)/DialogEvtCmdWait$(ObjectSuffix): DialogEvtCmdWait.cpp $(IntermediateDirectory)/DialogEvtCmdWait$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdWait.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdWait$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdWait$(DependSuffix): DialogEvtCmdWait.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdWait$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdWait$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdWait.cpp"

$(IntermediateDirectory)/DialogEvtCmdGetTerrainID$(ObjectSuffix): DialogEvtCmdGetTerrainID.cpp $(IntermediateDirectory)/DialogEvtCmdGetTerrainID$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdGetTerrainID.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdGetTerrainID$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdGetTerrainID$(DependSuffix): DialogEvtCmdGetTerrainID.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdGetTerrainID$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdGetTerrainID$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdGetTerrainID.cpp"

$(IntermediateDirectory)/DialogEvtCmdNotes$(ObjectSuffix): DialogEvtCmdNotes.cpp $(IntermediateDirectory)/DialogEvtCmdNotes$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdNotes.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdNotes$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdNotes$(DependSuffix): DialogEvtCmdNotes.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdNotes$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdNotes$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdNotes.cpp"

$(IntermediateDirectory)/DialogEvtCmdTeleportPlace$(ObjectSuffix): DialogEvtCmdTeleportPlace.cpp $(IntermediateDirectory)/DialogEvtCmdTeleportPlace$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdTeleportPlace.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdTeleportPlace$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdTeleportPlace$(DependSuffix): DialogEvtCmdTeleportPlace.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdTeleportPlace$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdTeleportPlace$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdTeleportPlace.cpp"

$(IntermediateDirectory)/DialogEvtCmdCallEvent$(ObjectSuffix): DialogEvtCmdCallEvent.cpp $(IntermediateDirectory)/DialogEvtCmdCallEvent$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdCallEvent.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdCallEvent$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdCallEvent$(DependSuffix): DialogEvtCmdCallEvent.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdCallEvent$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdCallEvent$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdCallEvent.cpp"

$(IntermediateDirectory)/DialogEvtCmdDeletePicture$(ObjectSuffix): DialogEvtCmdDeletePicture.cpp $(IntermediateDirectory)/DialogEvtCmdDeletePicture$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdDeletePicture.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdDeletePicture$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdDeletePicture$(DependSuffix): DialogEvtCmdDeletePicture.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdDeletePicture$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdDeletePicture$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdDeletePicture.cpp"

$(IntermediateDirectory)/DialogEvtCmdExperience$(ObjectSuffix): DialogEvtCmdExperience.cpp $(IntermediateDirectory)/DialogEvtCmdExperience$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdExperience.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdExperience$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdExperience$(DependSuffix): DialogEvtCmdExperience.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdExperience$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdExperience$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdExperience.cpp"

$(IntermediateDirectory)/DialogEvtCmdAnimation$(ObjectSuffix): DialogEvtCmdAnimation.cpp $(IntermediateDirectory)/DialogEvtCmdAnimation$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdAnimation.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdAnimation$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdAnimation$(DependSuffix): DialogEvtCmdAnimation.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdAnimation$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdAnimation$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdAnimation.cpp"

$(IntermediateDirectory)/DialogEvtCmdNumberInput$(ObjectSuffix): DialogEvtCmdNumberInput.cpp $(IntermediateDirectory)/DialogEvtCmdNumberInput$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdNumberInput.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdNumberInput$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdNumberInput$(DependSuffix): DialogEvtCmdNumberInput.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdNumberInput$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdNumberInput$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdNumberInput.cpp"

$(IntermediateDirectory)/DialogDbLearnSkill$(ObjectSuffix): DialogDbLearnSkill.cpp $(IntermediateDirectory)/DialogDbLearnSkill$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogDbLearnSkill.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogDbLearnSkill$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogDbLearnSkill$(DependSuffix): DialogDbLearnSkill.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogDbLearnSkill$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogDbLearnSkill$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogDbLearnSkill.cpp"

$(IntermediateDirectory)/DialogEvtCmdFaceGraphic$(ObjectSuffix): DialogEvtCmdFaceGraphic.cpp $(IntermediateDirectory)/DialogEvtCmdFaceGraphic$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdFaceGraphic.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdFaceGraphic$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdFaceGraphic$(DependSuffix): DialogEvtCmdFaceGraphic.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdFaceGraphic$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdFaceGraphic$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdFaceGraphic.cpp"

$(IntermediateDirectory)/DialogEvtCmdSystemGraphic$(ObjectSuffix): DialogEvtCmdSystemGraphic.cpp $(IntermediateDirectory)/DialogEvtCmdSystemGraphic$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdSystemGraphic.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdSystemGraphic$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdSystemGraphic$(DependSuffix): DialogEvtCmdSystemGraphic.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdSystemGraphic$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdSystemGraphic$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdSystemGraphic.cpp"

$(IntermediateDirectory)/DialogEvtCmdActorFaceGraphic$(ObjectSuffix): DialogEvtCmdActorFaceGraphic.cpp $(IntermediateDirectory)/DialogEvtCmdActorFaceGraphic$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdActorFaceGraphic.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdActorFaceGraphic$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdActorFaceGraphic$(DependSuffix): DialogEvtCmdActorFaceGraphic.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdActorFaceGraphic$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdActorFaceGraphic$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdActorFaceGraphic.cpp"

$(IntermediateDirectory)/DialogMap$(ObjectSuffix): DialogMap.cpp $(IntermediateDirectory)/DialogMap$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogMap.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogMap$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogMap$(DependSuffix): DialogMap.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogMap$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogMap$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogMap.cpp"

$(IntermediateDirectory)/DialogDbMaxNumber$(ObjectSuffix): DialogDbMaxNumber.cpp $(IntermediateDirectory)/DialogDbMaxNumber$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogDbMaxNumber.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogDbMaxNumber$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogDbMaxNumber$(DependSuffix): DialogDbMaxNumber.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogDbMaxNumber$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogDbMaxNumber$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogDbMaxNumber.cpp"

$(IntermediateDirectory)/DialogEvtCmdRecover$(ObjectSuffix): DialogEvtCmdRecover.cpp $(IntermediateDirectory)/DialogEvtCmdRecover$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdRecover.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdRecover$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdRecover$(DependSuffix): DialogEvtCmdRecover.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdRecover$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdRecover$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdRecover.cpp"

$(IntermediateDirectory)/DialogEvtCmdMovePicture$(ObjectSuffix): DialogEvtCmdMovePicture.cpp $(IntermediateDirectory)/DialogEvtCmdMovePicture$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdMovePicture.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdMovePicture$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdMovePicture$(DependSuffix): DialogEvtCmdMovePicture.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdMovePicture$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdMovePicture$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdMovePicture.cpp"

$(IntermediateDirectory)/DialogEvtCmdHP$(ObjectSuffix): DialogEvtCmdHP.cpp $(IntermediateDirectory)/DialogEvtCmdHP$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/DialogEvtCmdHP.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/DialogEvtCmdHP$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DialogEvtCmdHP$(DependSuffix): DialogEvtCmdHP.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/DialogEvtCmdHP$(ObjectSuffix) -MF$(IntermediateDirectory)/DialogEvtCmdHP$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/DialogEvtCmdHP.cpp"

$(IntermediateDirectory)/lmtReader$(ObjectSuffix): lmtReader.cpp $(IntermediateDirectory)/lmtReader$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/lmtReader.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/lmtReader$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/lmtReader$(DependSuffix): lmtReader.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/lmtReader$(ObjectSuffix) -MF$(IntermediateDirectory)/lmtReader$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/lmtReader.cpp"

$(IntermediateDirectory)/tools$(ObjectSuffix): tools.cpp $(IntermediateDirectory)/tools$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/tools.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/tools$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/tools$(DependSuffix): tools.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/tools$(ObjectSuffix) -MF$(IntermediateDirectory)/tools$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/tools.cpp"

$(IntermediateDirectory)/ldb_data$(ObjectSuffix): ldb_data.cpp $(IntermediateDirectory)/ldb_data$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/ldb_data.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/ldb_data$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ldb_data$(DependSuffix): ldb_data.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/ldb_data$(ObjectSuffix) -MF$(IntermediateDirectory)/ldb_data$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/ldb_data.cpp"

$(IntermediateDirectory)/ldbReader$(ObjectSuffix): ldbReader.cpp $(IntermediateDirectory)/ldbReader$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/ldbReader.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/ldbReader$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ldbReader$(DependSuffix): ldbReader.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/ldbReader$(ObjectSuffix) -MF$(IntermediateDirectory)/ldbReader$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/ldbReader.cpp"

$(IntermediateDirectory)/ldbstr$(ObjectSuffix): ldbstr.cpp $(IntermediateDirectory)/ldbstr$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/ldbstr.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/ldbstr$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ldbstr$(DependSuffix): ldbstr.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/ldbstr$(ObjectSuffix) -MF$(IntermediateDirectory)/ldbstr$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/ldbstr.cpp"

$(IntermediateDirectory)/stevent$(ObjectSuffix): stevent.cpp $(IntermediateDirectory)/stevent$(DependSuffix)
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	$(CompilerName) $(SourceSwitch) "/home/mariano/easyrpg/editor/src/stevent.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/stevent$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/stevent$(DependSuffix): stevent.cpp
	@test -d ../.obj/Debug || mkdir -p ../.obj/Debug
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/stevent$(ObjectSuffix) -MF$(IntermediateDirectory)/stevent$(DependSuffix) -MM "/home/mariano/easyrpg/editor/src/stevent.cpp"

##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMemorizePlace$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMemorizePlace$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMemorizePlace$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdPlayVideo$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdPlayVideo$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdPlayVideo$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdCommerce$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdCommerce$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdCommerce$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdShake$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdShake$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdShake$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMessage$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMessage$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMessage$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/FrameEditor$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/FrameEditor$(DependSuffix)
	$(RM) $(IntermediateDirectory)/FrameEditor$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEventMovement$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEventMovement$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEventMovement$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTone$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTone$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTone$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogDbSelectAnyGraphic$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogDbSelectAnyGraphic$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogDbSelectAnyGraphic$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdVehicleGraphic$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdVehicleGraphic$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdVehicleGraphic$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdBattle$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdBattle$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdBattle$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdPlaySound$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdPlaySound$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdPlaySound$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogMaterial$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogMaterial$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogMaterial$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdBlankScreen$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdBlankScreen$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdBlankScreen$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSystemMusic$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSystemMusic$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSystemMusic$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdWeather$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdWeather$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdWeather$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSkill$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSkill$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSkill$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdConditions$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdConditions$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdConditions$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmd$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmd$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmd$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEscapePermissions$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEscapePermissions$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEscapePermissions$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdVariable$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdVariable$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdVariable$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMP$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMP$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMP$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdItem$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdItem$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdItem$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorNameInput$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorNameInput$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorNameInput$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdInn$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdInn$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdInn$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSwitch$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSwitch$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSwitch$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/main$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/main$(DependSuffix)
	$(RM) $(IntermediateDirectory)/main$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEventPosition$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEventPosition$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEventPosition$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTeleportPermissions$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTeleportPermissions$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTeleportPermissions$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorGraphic$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorGraphic$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorGraphic$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMoney$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMoney$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMoney$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSavePermissions$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSavePermissions$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSavePermissions$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvt$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvt$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvt$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdVehiclePosition$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdVehiclePosition$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdVehiclePosition$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTeleport$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTeleport$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTeleport$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdChoice$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdChoice$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdChoice$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdDamage$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdDamage$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdDamage$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorTransparency$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorTransparency$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorTransparency$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdFlashCharacter$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdFlashCharacter$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdFlashCharacter$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdParameter$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdParameter$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdParameter$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEncounterRate$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEncounterRate$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEncounterRate$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdLevel$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdLevel$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdLevel$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSystemSound$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSystemSound$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSystemSound$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSwapEvents$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSwapEvents$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSwapEvents$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorName$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorName$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorName$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEscapePlace$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEscapePlace$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEscapePlace$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdPlayMusic$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdPlayMusic$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdPlayMusic$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdGetPositionID$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdGetPositionID$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdGetPositionID$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdShowScreen$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdShowScreen$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdShowScreen$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdGoToMemorizedPlace$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdGoToMemorizedPlace$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdGoToMemorizedPlace$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorTitle$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorTitle$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorTitle$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSystemMenuPermissions$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSystemMenuPermissions$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSystemMenuPermissions$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdParty$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdParty$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdParty$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdPicture$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdPicture$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdPicture$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTimer$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTimer$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTimer$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMoveScreen$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMoveScreen$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMoveScreen$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdLabel$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdLabel$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdLabel$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdGoToLabel$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdGoToLabel$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdGoToLabel$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdStatus$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdStatus$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdStatus$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdFlashScreen$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdFlashScreen$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdFlashScreen$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdKeyAssignment$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdKeyAssignment$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdKeyAssignment$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMessageOptions$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMessageOptions$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMessageOptions$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdPanorama$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdPanorama$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdPanorama$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdFadeMusic$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdFadeMusic$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdFadeMusic$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTransition$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTransition$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTransition$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEquipment$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEquipment$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdEquipment$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogDb$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogDb$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogDb$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTileset$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTileset$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTileset$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTile$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTile$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTile$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdWait$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdWait$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdWait$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdGetTerrainID$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdGetTerrainID$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdGetTerrainID$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdNotes$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdNotes$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdNotes$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTeleportPlace$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTeleportPlace$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdTeleportPlace$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdCallEvent$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdCallEvent$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdCallEvent$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdDeletePicture$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdDeletePicture$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdDeletePicture$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdExperience$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdExperience$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdExperience$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdAnimation$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdAnimation$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdAnimation$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdNumberInput$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdNumberInput$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdNumberInput$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogDbLearnSkill$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogDbLearnSkill$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogDbLearnSkill$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdFaceGraphic$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdFaceGraphic$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdFaceGraphic$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSystemGraphic$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSystemGraphic$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdSystemGraphic$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorFaceGraphic$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorFaceGraphic$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdActorFaceGraphic$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogMap$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogMap$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogMap$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogDbMaxNumber$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogDbMaxNumber$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogDbMaxNumber$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdRecover$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdRecover$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdRecover$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMovePicture$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMovePicture$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdMovePicture$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdHP$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdHP$(DependSuffix)
	$(RM) $(IntermediateDirectory)/DialogEvtCmdHP$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/lmtReader$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/lmtReader$(DependSuffix)
	$(RM) $(IntermediateDirectory)/lmtReader$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/tools$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/tools$(DependSuffix)
	$(RM) $(IntermediateDirectory)/tools$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/ldb_data$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/ldb_data$(DependSuffix)
	$(RM) $(IntermediateDirectory)/ldb_data$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/ldbReader$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/ldbReader$(DependSuffix)
	$(RM) $(IntermediateDirectory)/ldbReader$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/ldbstr$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/ldbstr$(DependSuffix)
	$(RM) $(IntermediateDirectory)/ldbstr$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/stevent$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/stevent$(DependSuffix)
	$(RM) $(IntermediateDirectory)/stevent$(PreprocessSuffix)
	$(RM) $(OutputFile)

-include $(IntermediateDirectory)/*$(DependSuffix)


