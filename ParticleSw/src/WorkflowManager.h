// RBotFirmware
// Rob Dobson 2016

#pragma once

#include "application.h"
#include "CommandQueue.h"

class WorkflowManager
{
private:
    CommandQueue _cmdQueue;

public:
    WorkflowManager()
    {
    }

    ~WorkflowManager()
    {
    }

    // Init
    void init(const char* configStr)
    {
        Log.info("Constructing WorkflowManager from %s", configStr);
        String cmdQueueCfg = RdJson::getString("CommandQueue", "NONE", configStr);

        _cmdQueue.init(cmdQueueCfg);
    }

    // Check if queue full
    bool isFull()
    {
        return _cmdQueue.isFull();
    }

    // Check if queue empty
    bool isEmpty()
    {
        return _cmdQueue.isEmpty();
    }

    // Add to workflow
    bool add(const char* pCmdStr)
    {
        bool rslt = _cmdQueue.add(pCmdStr);
        Log.trace("WorkflowManager add %s rslt %d numInQueue %d",
                        pCmdStr, rslt, _cmdQueue.size());
        return rslt;
    }

    // Get from workflow
    bool get(String& cmdStr)
    {
        return _cmdQueue.get(cmdStr);
    }

    // Get from workflow
    bool get(CommandElem& cmdElem)
    {
        return _cmdQueue.get(cmdElem);
    }

    // Get number of items in workflow queue
    int numWaiting()
    {
        return _cmdQueue.size();
    }

    // Clear the queue
    void clear()
    {
        _cmdQueue.clear();
    }

};