/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
GainControlPluginAudioProcessorEditor::GainControlPluginAudioProcessorEditor (GainControlPluginAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);

    addAndMakeVisible(gainSlider);
}

GainControlPluginAudioProcessorEditor::~GainControlPluginAudioProcessorEditor()
{
}

//==============================================================================
void GainControlPluginAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

}

void GainControlPluginAudioProcessorEditor::resized()
{
    gainSlider.setBounds(20, 20, 360, 40);
}
