// This file has been automatically generated by the Unreal Header Implementation tool

#include "UI/FGSignCanvasWidget.h"

void UFGSignCanvasWidget::Init( UFGSignInteractWidget* interactWidget, TArray<UFGSignElementData*> elementData){ }
void UFGSignCanvasWidget::AddSignCanvasElement(UFGSignElementData* elementData){ }
void UFGSignCanvasWidget::OnElementSelected( UFGSignElementData* elementData){ }
FVector2D UFGSignCanvasWidget::GetCanvasToComponentLocation(FVector2D locationInCanvas){ return FVector2D(); }
FVector2D UFGSignCanvasWidget::GetComponentToCanvasLocation(FVector2D locationInComponent){ return FVector2D(); }
void UFGSignCanvasWidget::ApplySignData(){ }
void UFGSignCanvasWidget::OnElementBeginDrag( UFGSignElementDragWidget* dragElement){ }
void UFGSignCanvasWidget::OnElementDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,  UFGSignElementDragDrop* InOperation){ }
void UFGSignCanvasWidget::SetCanvasSize(FVector2D size){ }
bool UFGSignCanvasWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation){ return bool(); }
void UFGSignCanvasWidget::NativeOnDragEnter(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation){ }
void UFGSignCanvasWidget::NativeOnDragLeave(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation){ }
void UFGSignCanvasWidget::InitializeSlot( UCanvasPanelSlot* slot){ }
UFGSignElementWidget* UFGSignCanvasWidget::GetElementWidgetById(int32 id){ return nullptr; }
