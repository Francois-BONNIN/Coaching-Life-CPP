<?php

/*
|--------------------------------------------------------------------------
| Application Routes
|--------------------------------------------------------------------------
|
| Here is where you can register all of the routes for an application.
| It is a breeze. Simply tell Lumen the URIs it should respond to
| and give it the Closure to call when that URI is requested.
|
*/

$router->get('/', function () use ($router) {
    return "API DE COACHING LIFE";
});

$router->get('/tasks', 'TaskController@listTask');
$router->get('/category', 'TaskController@listCategory');
$router->get('/coach', 'TaskController@listCoach');
$router->get('/search', 'TaskController@search');

$router->post('/task/create', 'TaskController@createTask');
$router->post('/task/edit/{id}', 'TaskController@editTask');
$router->post('/task/completed/{id}', 'TaskController@finishTask');
$router->post('/task/discompleted/{id}', 'TaskController@notFinishTask');
$router->post('/coach/completed/{id}', 'TaskController@finishCoach');
$router->post('/coach/discompleted/{id}', 'TaskController@notFinishCoach');
$router->delete('/task/delete/{id}', 'TaskController@deleteTask');
