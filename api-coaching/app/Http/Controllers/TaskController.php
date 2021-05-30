<?php

namespace App\Http\Controllers;

use App\Task;
use App\Category;
use App\Coach;
use App\Users;
use App\Http\Controllers\Controller;
use Illuminate\Http\Request;
use phpDocumentor\Reflection\DocBlock\Tags\Uses;

class TaskController extends Controller{
    
    public function listTask(){
        $task = Task::all();
        return response()->json($task);
    }

    public function search(Request $request){
         
        if ($request->has('title')) {
            $task = Task::where('title', 'like', '%'.$request->input('title').'%') 
            ->get();
            return response()->json($task);
        }

        if ($request->has('description')) {
            $task = Task::where('description', 'like', '%'.$request->input('description').'%') 
            ->get();
            return response()->json($task);
        }

        if ($request->has('completed')) {
            $task = Task::where('completed', '=', $request->input('completed'))
            ->get();
            return response()->json($task);
        }
    }

    public function listCategory(){
        $category = Category::all();
        return response()->json($category);
    }

    public function listCoach(){
        $coach = Coach::all();
        return response()->json($coach);
    }

    public function createTask(Request $request){
        $task = Task::create($request -> all());
        return response()->json($task, 201);
    }

    public function editTask($id, Request $request){
        $task = Task::find($id);
        if($task){
            $task->title=$request->input('title');
            $task->description=$request->input('description');
            $task->completed=0;
            $task->save();
            return response()->json("Tâche Modifier");
        }else{
            return response()->json("Erreur");
        }
    }
    
    public function finishTask($id){
        $task = Task::find($id);
        if($task){
            $task->completed=1;
            $task->save();
            return response()->json("Tâche finis");
        }else{
            return response()->json("Erreur");
        }
    }

    public function notFinishTask($id){
        $task = Task::find($id);
        if($task){
            $task->completed=0;
            $task->save();
            return response()->json("Tâche à faire");
        }else{
            return response()->json("Erreur");
        }
    }

    public function finishCoach($id){
        $coach = Coach::find($id);
        if($coach){
            $coach->completed=1;
            $coach->save();
            return response()->json("Tâche finis");
        }else{
            return response()->json("Erreur");
        }
    }

    public function notFinishCoach($id){
        $coach = Coach::find($id);
        if($coach){
            $coach->completed=0;
            $coach->save();
            return response()->json("Tâche à faire");
        }else{
            return response()->json("Erreur");
        }
    }

    public function deleteTask($id){
        $task = Task::find($id);
        if($task){
            $task->delete();
            return response()->json("Tâche supprimée");
        }else{
            return response()->json("Erreur");
        }
    }

    


}